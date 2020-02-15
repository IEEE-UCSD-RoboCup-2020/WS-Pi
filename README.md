# WS-Pi
Communications between PC to Pi to STM using Websockets

To compile and generate the `main` executable (requires protobuf) in WS_Client directory:
```bash
g++ -std=c++17 -lprotobuf ../ProtoWS/command.pb.cc main.cpp -o main
```