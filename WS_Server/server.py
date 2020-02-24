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
    await broadcast( "Device was connected." )

async def unregister( websocket ):
    USERS.remove( websocket )
    print( "A client has disconnected, " + str( len( USERS ) ) + " client(s) connected" )
    await broadcast( "Device was disconnected." )

# Main method sending number of clients to all users (currently number of users)
async def main( websocket, path ):
    await register( websocket )
    try:
        async for message in websocket:
            # Code block managing messages received
            if ( message != "" ):
                # Commands that take one or no input
                cmdReceived = message.split( ' ', 1 )
                if ( len( cmdReceived ) > 1 and cmdReceived[0] == "broadcast" ):
                    await broadcast( cmdReceived[1] )
                elif ( cmdReceived[0] == "queryOrder" ):
                    await queryOrder( websocket )
                else:
                    print( message )
            
            # Code block managing sending commands
            if ( len( commands ) > 0 ):
                getCmd = commands.pop()

                # Send command with rudimentary checking:
                cmdSend = getCmd.split( ' ', 2 )
                if ( len( cmdSend ) == 1 and cmdSend[0] == "rollCall" ):
                    await rollCall()
                elif ( len( cmdSend ) > 2 and cmdSend[0] == "send" ):
                    await send( cmdSend )
                elif ( len( cmdSend ) > 2 and cmdSend[0] == "assign" ):
                    await assign( cmdSend[1], cmdSend[2] )                
                else:
                    await broadcast( getCmd )
            else:
                await websocket.send( "" )
    except websockets.exceptions.ConnectionClosedOK:
        print( "A client has disconnected, " + str( len( USERS ) ) + " client(s) connected" )
        await broadcast( "Device was disconnected." )
    finally:
        await unregister( websocket )

# Method to manage stdin input from asyncio's reader
def stdin_data( cmdInput ):
    commands.add( sys.stdin.readline().strip( '\n' ) )

# General debug methods
async def broadcast( message ):
    if ( len( USERS ) != 0 ):    
        await asyncio.wait( [user.send( message ) for user in USERS] )

async def error( message ):
    print( "Error: " + message )

# Command methods for sending messages

# rollCall: Pings all clients based on order of USERS list
async def rollCall():
    for user in USERS:
        await user.send( "Rollcall" )
        await asyncio.sleep( 2 )

# send: Sends a message to a specified client. 
#   commands[1] is which user to send to
#   commands[2] is what message to send
async def send( commands ):
    try:
        to = int( commands[1] )
        
        if ( to > len( USERS ) ):
            raise Exception( "Out of range" )

        await USERS[to].send( commands[2] )
    except ValueError:
        await error( "Type a number." )
    except AssertionError:
        await error( "Selected client not in list of users." )

# assign: Swaps clients in order of USERS. Useful for reassigning robots.
#   selectBot and switchWithBot are which clients to switch. You can test 
#   where the client is in the USERS list through the client command "queryOrder"
async def assign( selectBot, switchWithBot ):
    try:
        select = int( selectBot )
        switch = int( switchWithBot )
    except ValueError:
        await error( "Provide integers for which bots to switch." )
        return

    if ( len( USERS ) > 1 and select != switch ):
        botSelect = USERS[select]
        botSwitch = USERS[switch]

        USERS.remove( botSelect )
        USERS.insert( switch, botSelect )
        USERS.remove( botSwitch )
        USERS.insert( select, botSwitch )
        print(USERS)
        
        await USERS[select].send( "I switched with robot " + str( switch ) + "!" )
        await USERS[switch].send( "I switched with robot " + str( select ) + "!" )
    else:
        await error( "Bots to select must be different values and less than clients connected." )

# queryOrder: Tells client what order the bot is in.
#   searchBot is the websocket to find in USERS list and
#   and where to send back the information.
async def queryOrder( searchBot ):
    await searchBot.send( "You are in index " + str( USERS.index( searchBot ) ) + " of the list." )

start_server = websockets.serve( main, "localhost", 8765 )

asyncio.get_event_loop().add_reader( sys.stdin, stdin_data, commands )
asyncio.get_event_loop().run_until_complete( start_server )
asyncio.get_event_loop().run_forever()
