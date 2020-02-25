# WS-Pi
Communications between PC to Pi to STM using Websockets

To compile and generate the `main` executable (requires protobuf) in WS_Client directory:

On Mac:
```bash
g++ -std=c++17 -lprotobuf ../ProtoWS/command.pb.cc main.cpp -o main
```
on Linux:
```bash
g++ -std=c++17 ../ProtoWS/command.pb.cc main.cpp -o main `pkg-config --cflags --libs protobuf` -lstdc++fs
```
or
```bash
g++ -std=c++17 ../ProtoWS/command.pb.cc main.cpp -o main -pthread -I/usr/local/include -L/usr/local/lib -lprotobuf -lstdc++fs
```
