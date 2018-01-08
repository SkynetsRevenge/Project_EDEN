//Triple Entente 201X || 2017-18
#ifndef COMMANDS_H_INCLUDED
#define COMMANDS_H_INCLUDED
#define c 261
#define d 294
#define e 329
#define f 349
#define g 391
#define gS 415
#define a 440
#define aS 455
#define b 466
#define cH 523
#define cSH 554
#define dH 587
#define dSH 622
#define eH 659
#define fH 698
#define fSH 740
#define gH 784
#define gSH 830
#define aH 880
#include <iostream>
#include "Description.h"
#include <cstring>
#include <windows.h>
void direction(int cordxx,int cordyy);
using namespace std;
void commands()
{
    string command;
    int cordx=3;
    int cordy=3;
    direction(cordx,cordy);
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
            direction(cordx,cordy);
        }
        else if(command == "HELP")
        {
            cout << "Commands are:\n - GRAB [Item] - Grabs and item in the tile you're in\n - LOOK - Gives a description of the tile your in, and tells you what items are in the tile you're in\n - ATTK - Attacks an enemy in the tile you're in\n - MOVE [Direction] - Moves to a tile North, East, South, or West\n - EXIT - Exits the game, and returns you to MS-DOS\n";
        }
        else if(command == "THANKS")
        {
            int song;
            cout << "You're Welcome!\n";
            cout << "What song would you like? \n";
            cin >> song;
            if(song == 1)
            {

                Beep (330,100);Sleep(100);
                Beep (330,100);Sleep(300);
                Beep (330,100);Sleep(300);
                Beep (262,100);Sleep(100);
                Beep (330,100);Sleep(300);
                Beep (392,100);Sleep(700);
                Beep (196,100);Sleep(700);
                Beep (262,300);Sleep(300);
                Beep (196,300);Sleep(300);
                Beep (164,300);Sleep(300);
                Beep (220,300);Sleep(100);
                Beep (246,100);Sleep(300);
                Beep (233,200);
                Beep (220,100);Sleep(300);
                Beep (196,100);Sleep(150);
                Beep (330,100);Sleep(150);
                Beep (392,100);Sleep(150);
                Beep (440,100);Sleep(300);
                Beep (349,100);Sleep(100);
                Beep (392,100);Sleep(300);
                Beep (330,100);Sleep(300);
                Beep (262,100);Sleep(100);
                Beep (294,100);Sleep(100);
                Beep (247,100);Sleep(500);
                Beep (262,300);Sleep(300);
                Beep (196,300);Sleep(300);
                Beep (164,300);Sleep(300);
                Beep (220,300);Sleep(100);
                Beep (246,100);Sleep(300);
                Beep (233,200);
                Beep (220,100);Sleep(300);
                Beep (196,100);Sleep(150);
                Beep (330,100);Sleep(150);
                Beep (392,100);Sleep(150);
                Beep (440,100);Sleep(300);
                Beep (349,100);Sleep(100);
                Beep (392,100);Sleep(300);
                Beep (330,100);Sleep(300);
                Beep (262,100);Sleep(100);
                Beep (294,100);Sleep(100);
                Beep (247,100);Sleep(900);
                Beep (392,100);Sleep(100);
                Beep (370,100);Sleep(100);
                Beep (349,100);Sleep(100);
                Beep (311,100);Sleep(300);
                Beep (330,100);Sleep(300);
                Beep (207,100);Sleep(100);
                Beep (220,100);Sleep(100);
                Beep (262,100);Sleep(300);
                Beep (220,100);Sleep(100);
                Beep (262,100);Sleep(100);
                Beep (294,100);Sleep(500);
                Beep (392,100);Sleep(100);
                Beep (370,100);Sleep(100);
                Beep (349,100);Sleep(100);
                Beep (311,100);Sleep(300);
                Beep (330,100);Sleep(300);
                Beep (523,100);Sleep(300);
                Beep (523,100);Sleep(100);
                Beep (523,100);Sleep(1100);
                Beep (392,100);Sleep(100);
                Beep (370,100);Sleep(100);
                Beep (349,100);Sleep(100);
                Beep (311,100);Sleep(300);
                Beep (330,100);Sleep(300);
                Beep (207,100);Sleep(100);
                Beep (220,100);Sleep(100);
                Beep (262,100);Sleep(300);
                Beep (220,100);Sleep(100);
                Beep (262,100);Sleep(100);
                Beep (294,100);Sleep(500);
                Beep (311,300);Sleep(300);
                Beep (296,300);Sleep(300);
                Beep (262,300);Sleep(1300);

                Beep (262,100);Sleep(100);
                Beep (262,100);Sleep(300);
                Beep (262,100);Sleep(300);
                Beep (262,100);Sleep(100);
                Beep (294,100);Sleep(300);
                Beep (330,200);Sleep(50);
                Beep (262,200);Sleep(50);
                Beep (220,200);Sleep(50);
                Beep (196,100);Sleep(700);
                Beep (262,100);Sleep(100);
                Beep (262,100);Sleep(300);
                Beep (262,100);Sleep(300);
                Beep (262,100);Sleep(100);
                Beep (294,100);Sleep(100);
                Beep (330,100);Sleep(700);
                Beep (440,100);Sleep(300);
                Beep (392,100);Sleep(500);
                Beep (262,100);Sleep(100);
                Beep (262,100);Sleep(300);
                Beep (262,100);Sleep(300);
                Beep (262,100);Sleep(100);
                Beep (294,100);Sleep(300);
                Beep (330,200);Sleep(50);
                Beep (262,200);Sleep(50);
                Beep (220,200);Sleep(50);
                Beep (196,100);Sleep(700);
                /*Intro*/
                Beep (330,100);Sleep(100);
                Beep (330,100);Sleep(300);
                Beep (330,100);Sleep(300);
                Beep (262,100);Sleep(100);
                Beep (330,100);Sleep(300);
                Beep (392,100);Sleep(700);
                Beep (196,100);Sleep(700);
                Beep (196,100);Sleep(125);
                Beep (262,100);Sleep(125);
                Beep (330,100);Sleep(125);
                Beep (392,100);Sleep(125);
                Beep (523,100);Sleep(125);
                Beep (660,100);Sleep(125);
                Beep (784,100);Sleep(575);
                Beep (660,100);Sleep(575);
                Beep (207,100);Sleep(125);
                Beep (262,100);Sleep(125);
                Beep (311,100);Sleep(125);
                Beep (415,100);Sleep(125);
                Beep (523,100);Sleep(125);
                Beep (622,100);Sleep(125);
                Beep (830,100);Sleep(575);
                Beep (622,100);Sleep(575);
                Beep (233,100);Sleep(125);
                Beep (294,100);Sleep(125);
                Beep (349,100);Sleep(125);
                Beep (466,100);Sleep(125);
                Beep (587,100);Sleep(125);
                Beep (698,100);Sleep(125);
                Beep (932,100);Sleep(575);
                Beep (932,100);Sleep(125);
                Beep (932,100);Sleep(125);
                Beep (932,100);Sleep(125);
                Beep (1046,675);
                system ("pause");
            }
            else if(song == 2)
            {
                Beep(a, 500);
                Beep(a, 500);
                Beep(a, 500);
                Beep(f, 350);
                Beep(cH, 150);
                Beep(a, 500);
                Beep(f, 350);
                Beep(cH, 150);
                Beep(a, 650);

                Sleep(150);


                Beep(eH, 500);
                Beep(eH, 500);
                Beep(eH, 500);
                Beep(fH, 350);
                Beep(cH, 150);
                Beep(gS, 500);
                Beep(f, 350);
                Beep(cH, 150);
                Beep(a, 650);

                Sleep(150);

                Beep(aH, 500);
                Beep(a, 300);
                Beep(a, 150);
                Beep(aH, 400);
                Beep(gSH, 200);
                Beep(gH, 200);
                Beep(fSH, 125);
                Beep(fH, 125);
                Beep(fSH, 250);

                Sleep(250);

                Beep(aS, 250);
                Beep(dSH, 400);
                Beep(dH, 200);
                Beep(cSH, 200);
                Beep(cH, 125);
                Beep(b, 125);
                Beep(cH, 250);

                Sleep(250);

                Beep(f, 125);
                Beep(gS, 500);
                Beep(f, 375);
                Beep(a, 125);
                Beep(cH, 500);
                Beep(a, 375);
                Beep(cH, 125);
                Beep(eH, 650);


                Beep(aH, 500);
                Beep(a, 300);
                Beep(a, 150);
                Beep(aH, 400);
                Beep(gSH, 200);
                Beep(gH, 200);
                Beep(fSH, 125);
                Beep(fH, 125);
                Beep(fSH, 250);

                Sleep(250);

                Beep(aS, 250);
                Beep(dSH, 400);
                Beep(dH, 200);
                Beep(cSH, 200);
                Beep(cH, 125);
                Beep(b, 125);
                Beep(cH, 250);

                Sleep(250);

                Beep(f, 250);
                Beep(gS, 500);
                Beep(f, 375);
                Beep(cH, 125);
                Beep(a, 500);
                Beep(f, 375);
                Beep(cH, 125);
                Beep(a, 650);
            }
        }
        else
        {
            cout << "\nInvalid command";
        }

    }while(command != "EXIT");




}

void direction(int cordxx,int cordyy)
{
    cout << "You are in tile x:" << cordxx << " y:" << cordyy << "\n";
    if ((cordyy == 3)&&(cordxx == 3))
    {
        cout << "\nYou're at spawn";
    }
    else if((cordyy == 5)&&(cordxx == 4))
    {
       cout << "\nThis tile is special!!!";
    }
    else
    {
        normaltile();
    }

}
/*
//I Put this here because commands.h doesn't want to talk with tilesMAIN.h
void tile3_3()//spawn tile
{
    int player=0;

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
