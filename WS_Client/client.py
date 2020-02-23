#!/usr/bin/env python3

import sys
import time
import asyncio
import websockets
import command_pb2

commands = set()

# Just waits for a command from the server. Otherwise, 
# send the command to the server.
async def hello():
    uri = "ws://localhost:8765"
    command = command_pb2.command()
    async with websockets.connect(uri) as websocket:
        
        # Notify the server that the client connected.
        await websocket.send("");
        await websocket.recv();

        # Maintain the connection through while(True) loop
        while(True):
            # Send commands in the queue if any are set.
            # Otherwise, send garbage data
            if (len(commands) > 0):
                m = commands.pop()
                
                # Close command to cleanly disconnect from server
                if (m == "close"):
                    await websocket.close()
                    break

                await websocket.send(m)            
            else:
                await websocket.send("")

            # Wait for response and do something with it
            response = await websocket.recv()
            if (response != ""):
                print(response)

# Method to manage stdin data sent from asyncio's reader
def stdin_data( message ):
    commands.add(sys.stdin.readline().strip('\n'))

async def protoSend( srv_type, msg_send ):
    f = open("protoFile", "wb")
    command.service_type = srv_type
    command.msg = msg_send
    f.write(command.SerializeToString())
    f.close()

asyncio.get_event_loop().add_reader(sys.stdin, stdin_data, commands)
asyncio.get_event_loop().run_until_complete(hello())
