#if __cplusplus < 201703L
#error "C++17 standard is required"
#endif

#include <atomic>
#include <chrono>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <future>
#include "../ProtoWS/command.pb.h"


std::atomic<bool> stop (false);
command cmd;


// For debug use
template<typename ...Args>
void printer(Args&&... args) {
    (std::cout << ... << args) << std::endl;
}



void receive(std::string filename) {
    GOOGLE_PROTOBUF_VERIFY_VERSION;

    std::filesystem::path f_path(filename);
    decltype(std::filesystem::last_write_time(f_path)) last_modified;
    
    while(1) {
        // Stop signal
        if(stop) {
            return;
        }

        // Busy checking
        if(std::filesystem::exists(f_path) && last_modified < std::filesystem::last_write_time(f_path)) {
            std::fstream input(filename, std::ios::in | std::ios::binary);
            cmd.ParseFromIstream(&input);
            printer("Command received: ", "service_type=", cmd.service_type(), ", msg=", cmd.msg());
            last_modified = std::filesystem::last_write_time(f_path);
        }
    }

    //std::filesystem::remove(f_path); Maybe used later for cleanup

    google::protobuf::ShutdownProtobufLibrary();
}



int main(void) {
    
    // Fire the thread
    auto result = std::async(std::launch::async, receive, "Ehh");

    // Wait for stop signal
    while(getchar() != EOF);

    // Cleanup
    stop = true;
    result.get();
    std::cout << "Stopped" << std::endl;
    
    return 0;
}

