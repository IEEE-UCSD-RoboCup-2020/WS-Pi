#!/usr/bin/env python3

import asyncio
import websockets

async def hello():
    uri = "ws://localhost:8765"
    async with websockets.connect(uri) as websocket:
        message = input()
        await websocket.send(message)
        response = await websocket.recv()
        if (response != ""):
            print(response)

while(True):
    asyncio.get_event_loop().run_until_complete(hello())
