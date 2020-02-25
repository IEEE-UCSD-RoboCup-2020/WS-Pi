#if __cplusplus < 201703L
#error "C++17 standard is required"
#endif

#if __GNUC__ >= 8
#include <filesystem>
#define FS std::filesystem
#else
#include <experimental/filesystem>
#define FS std::experimental::filesystem
#endif

#include <fstream>
#include <future>
#include "../ProtoWS/command.pb.h"


// For debug use
template<typename ...Args>
void printer(Args&&... args) {
    (std::cout << ... << args) << std::endl;
}



void receive(std::string filename) {
    GOOGLE_PROTOBUF_VERIFY_VERSION;
    command cmd;

    FS::path f_path(filename);
    FS::file_time_type last_modified;
    
    while(1) {
        // Busy checking
        if(FS::exists(f_path) && last_modified < FS::last_write_time(f_path)) {
            std::fstream input(filename, std::ios::in | std::ios::binary);
            cmd.ParseFromIstream(&input);

            // Stop condition
            if(cmd.msg() == "quit") {
                break;
            }

            printer("Command received: ", "service_type=", cmd.service_type(), ", msg=\"", cmd.msg(), "\"");
            last_modified = FS::last_write_time(f_path);
        }
    }

    FS::remove(f_path);

    google::protobuf::ShutdownProtobufLibrary();
}



int main(void) {
    
    // Fire the thread
    auto result = std::async(std::launch::async, receive, "protoFile");

    // Cleanup
    result.get();
    std::cout << "Stopped" << std::endl;
    
    return 0;
}

