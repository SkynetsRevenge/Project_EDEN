#ifndef SYSTEMROLLS_H_INCLUDED
#define SYSTEMROLLS_H_INCLUDED
#include <iostream>
#include <cstdlib>
using namespace std;

void tile()
{
    int roll;
    int itemroll;
    int potionhealth;
    int coinamnt;
    roll = rand() % 4 + 1;

    if(roll==1)
    {
        cout << "You ran into a mook!";
        [BATTLE SEQUENCE NAME]();
    }
    else if{roll==2}
    {
        cout << "You found and item! Lucky you!";
        itemroll = rand() % 10 + 1;
        //potion
        if( itemroll == 1)
        {
            cout >> "You found a health potion";
            potionhealth = 1;
            inventoryadd(potionhealth); //Make a funtion for adding inventory items in inventiry.h
        }
        //coins
        if( itemroll == 2)
        {
            cout >> "You found some plastic caps! Huzzah!";
            coinamnt = rand() % 100 + 1;
            inventoryadd(coinamnt);
        }
        /** SOMETHING --- MAXENZDEE MAKE IT UP
                if( itemroll == 1)
        {

        }

                if( itemroll == 1)
        {

        }

                if( itemroll == 1)
        {

        }

                if( itemroll == 1)
        {

        }

                if( itemroll == 1)
        {

        }

                if( itemroll == 1)
        {

        }
        **/
        //regular tile
        if (roll == 3 || roll == 4)
        {

        }
    }
}
void requlartile()
{
    mapz(); /** What we could do is make ever tile asigned a number
                and whenever the play moves the game checks what the
                tiles it, and makes the previous tile player int to 0
                and the new tile's player int to 1;
                ex. of a tiles function:

                void tile1();
                {
                int player;
                char direction[6];
                //this tile is the spawn
                player = player + 1
                cout << [desciption of tile]\n;
                cout << "You can go north, south, west, or east\n;
                cin >> direction;
                if (direction == 'east')
                {
                    move to the tile to the east of tile 1;
                }
                else if (direction == 'west')
                {
                    move to the tile to the west of tile 1;
                }
                else if (direction == 'north')
                {
                    move to the tile to the north of tile 1;
                }
                else if (direction == 'south')
                {
                    move to the tile to the south of tile 1;
                }
                **/



    cout >> "This is a reqular tile, there is nothing here"

}

#endif // SYSTEMROLLS_H_INCLUDED
