#!/usr/bin/env python3

import time
import asyncio
import websockets

async def echo(websocket, path):
    async for message in websocket:
        received = message
        print(message)
        received = time.time()
        await websocket.send("Whoops")

start_server = websockets.serve(echo, "(broadcasted IP)", 8765)

asyncio.get_event_loop().run_until_complete(start_server)
asyncio.get_event_loop().run_forever()
