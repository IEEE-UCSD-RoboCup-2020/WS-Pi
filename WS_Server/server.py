#!/usr/bin/env python3

import sys
import time
import asyncio
import websockets

USERS = list()
commands = set()

# Methods handling registration of new clients
async def register(websocket):
    USERS.append(websocket)
    await asyncio.wait([user.send("Device was connected.") for user in USERS])

async def unregister(websocket):
    USERS.remove(websocket)
    await asyncio.wait([user.send("Device was disconnected.") for user in USERS])

# Main method sending number of clients to all users (currently number of users)
async def main(websocket, path):
    await register(websocket)
    try:
        async for message in websocket:
            received = message
            if (message != ""):
                print(message)
            
            # Send commands in the list if any are there.
            # TODO: Implement specific client sending
            if (len(commands) > 0):
                m = commands.pop()
                await asyncio.wait([user.send(m) for user in USERS])            
            else:
                await websocket.send("")
    finally:
        await unregister(websocket)

# Method to manage stdin input from asyncio's reader
def stdin_data(cmdInput):
    commands.add(sys.stdin.readline().strip('\n'))

start_server = websockets.serve(main, "localhost", 8765)

asyncio.get_event_loop().add_reader(sys.stdin, stdin_data, commands)
asyncio.get_event_loop().run_until_complete(start_server)
asyncio.get_event_loop().run_forever()
