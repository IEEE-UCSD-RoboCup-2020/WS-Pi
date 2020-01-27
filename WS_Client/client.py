#!/usr/bin/env python3

import asyncio
import websockets

# Just waits for a response (or just how many users are there.
async def hello():
    uri = "ws://localhost:8765"
    async with websockets.connect(uri) as websocket:
        await websocket.send("Connect.");
        await websocket.recv();
        while(True):
            await websocket.send("")
            response = await websocket.recv()
            if (response != ""):
                print(response)

while(True):
    asyncio.get_event_loop().run_until_complete(hello())
