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
    int cordx=3;
    int cordy=3;
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
            cout << "In direction ";
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
    }while(command != "EXIT");




}
/*
void direction()
{
    commands(&cordy,&cordx)
    int cordyy;
    int cordxx;
    if ((cordyy == 3)&&(cordxx == 3))
    {
        tile3_3(player = 1);
    }
    else if((cordyy == 5)&&(cordxx == 4))
    {
        tile5_4(player = 1);
    }
    else
    {
        normaltile();
    }

}
//I Put this here because commands.h doesn't want to talk with tilesMAIN.h
void tile3_3()//spawn tile
{
    int player=0;
    cout << "You're at spawn";
    if((cordyy != 3)&&(cordxx != 3))
    {
        player = 0;
    }
}
void tile5_4()//special tile
{
    int player=0
    cout << "This tile is special!!!";
    //These kinds of tiles we would use for things like bosses and cities
    //In the future, lets change this file to a town so we can test shops and Inns
    if((cordyy != 5)&&(cordxx != 4))
    {
        player = 0;
    }
}
*/
#endif // COMMANDS_H_INCLUDED
