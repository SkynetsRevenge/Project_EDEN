//Triple Entente 201X || 2017-18
#ifndef COMMANDS_H_INCLUDED
#define COMMANDS_H_INCLUDED
#include <iostream>
#include "Description.h"
#include <cstring>
using namespace std;
void commands()
{
    string command;
    do{
        //Commands are GRAB(Adds Item to inventory), LOOK(Gives a description of the area), ATTK(rolls dice for damage), MOVE(Moves to a tile

        cout << "\nEnter a command: ";
        cin.get();
        cin >> command;


        if(command == "GRAB")
        {
            //WIP
            cout << "This game is a WIP, try another command\n";
        }
        else if(command == "LOOK")
        {
            normaltile();
        }
        else if(command == "ATTK")
        {
            //WIP
            cout << "This game is a WIP, try another command\n";
        }
        else if(command == "MOVE")
        {
            string movement;
            int cordx=24;
            int cordy=26;
            cin >> movement;
            if(movement == "NORTH")
            {
                cordy = cordy + 1;
            }

            else if(movement == "SOUTH")
            {
                cordy = cordy - 1;
            }

            else if(movement == "EAST")
            {
                cordx = cordx + 1;
            }

            else if(movement == "WEST")
            {
                cordx = cordx - 1;
            }

        }
        else if(command == "HELP")
        {
            cout << "Commands are:\n - GRAB [Item] - Grabs and item in the tile you're in\n - LOOK - Gives a description of the tile your in, and tells you what items are in the tile you're in\n - ATTK - Attacks an enemy in the tile you're in\n - MOVE [Direction] - Moves to a tile North, East, South, or West\n - EXIT - Exits the game, and returns you to MS-DOS\n";
        }
        else
        {
            cout << "\nInvalid command";
        }
    }while(command =! "EXIT");




}


#endif // COMMANDS_H_INCLUDED
