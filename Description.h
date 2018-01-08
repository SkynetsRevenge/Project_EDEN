//Triple Entente 201X || 2017-18
#ifndef DESCRIPTION_H_INCLUDED
#define DESCRIPTION_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <ctype.h>
using namespace std;

void normaltile()
{
    int roll;
    roll = rand() % 2;

    if (roll == 0)
    {
        cout << "For once, there are no monsters. The ash covered pine trees surround your location while mutated birds caw their\n";
        cout << "deathly caws and the nuclear fog makes the ground invisible";
    }

    else if(roll == 1)
    {
        cout << "Its quiet, to quiet. I blame Vivian. I guess the mooks are on their lunch break\n";
    }

    else if(roll == 2)
    {
        cout << "The orange clouds contract nicely with the puke colored sky. Because of the nuclear winter, you can't see jack though.";
    }
};

void mooktile()
{
    cout << "Oh my word! Its a mook";
}
#endif // DESCRIPTION_H_INCLUDED
