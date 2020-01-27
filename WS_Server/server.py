#!/usr/bin/env python3

import time
import asyncio
import websockets

USERS = set()

# Methods handling registration of new clients
async def register(websocket):
    USERS.add(websocket)
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
            await websocket.send(str(len(USERS)))
    finally:
        await unregister(websocket)

# TODO: Make commands while sending and receiving messages
async def command():
    while(True):
        command = input()
        print(command)

start_server = websockets.serve(main, "localhost", 8765)

asyncio.get_event_loop().run_until_complete(start_server)
asyncio.get_event_loop().run_forever()
