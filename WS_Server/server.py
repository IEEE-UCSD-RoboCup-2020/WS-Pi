#!/usr/bin/env python3

import sys
import time
import asyncio
import websockets

USERS = list()
commands = set()

# Methods handling registration of new clients
async def register( websocket ):
    USERS.append( websocket )
    print( "A client has connected, " + str( len( USERS ) ) + " client(s) connected" )
    await broadcast("Device was connected.")

async def unregister( websocket ):
    USERS.remove( websocket )
    print( "A client has disconnected, " + str(len(USERS)) + " client(s) connected" )
    await broadcast("Device was disconnected.")

# Main method sending number of clients to all users (currently number of users)
async def main( websocket, path ):
    await register( websocket )
    try:
        async for message in websocket:
            # Code block managing messages received
            if ( message != "" ):
                checkCmd = message.split( ' ', 1 )
                if ( len(checkCmd) > 1 and checkCmd[0] == "broadcast" ):
                    await broadcast( checkCmd[1] )            
                else:
                    print( message )
            
            # Code block managing sending commands
            # TODO: Implement specific client sending
            if ( len( commands ) > 0 ):
                m = commands.pop()

                # Send command with rudimentary checking
                send = m.split( ' ', 2 )
                if ( len(send) > 2 and send[0] == "send" ):
                    try:
                        to = int( send[1] )
                        await USERS[to].send( send[2] )
                    except ValueError:
                        print("Type a number.")
                else:
                    await broadcast( m )
            else:
                await websocket.send( "" )
    finally:
        await unregister( websocket )

# Method to manage stdin input from asyncio's reader
def stdin_data( cmdInput ):
    commands.add( sys.stdin.readline().strip( '\n' ) )

async def broadcast( message ):
    if ( len( USERS ) != 0 ):    
        await asyncio.wait( [user.send( message ) for user in USERS] )

start_server = websockets.serve( main, "localhost", 8765 )

asyncio.get_event_loop().add_reader( sys.stdin, stdin_data, commands )
asyncio.get_event_loop().run_until_complete( start_server )
asyncio.get_event_loop().run_forever()
