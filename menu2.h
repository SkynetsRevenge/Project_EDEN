//Triple Entente 201X || 2017-18
#ifndef MENU2_H_INCLUDED
#define MENU2_H_INCLUDED
#include <iostream>
#include "commands.h"
using namespace std;

void menu()
{
    int what;
    cout << "                   Welcome to:                  \n";
    cout << "            E.D.E.N, The Wastes of OOF          \n";
    cout << "         By: Phillip, Alexi, and Makenzie       \n";
    cout << "1. New game\n";
    cout << "2. Load game\n";
    cin >> what;

    if(what == 1)
    {
    cout << "After 1 year of donald trump’s presidency everything has gone to shit. North Korea had finally fired a(few) nukes and destroyed all major american cities because of a rock paper scissors duel with Trump. Kim won, with a nuke[explosion sound effect]. America fell apart and most people now live in small tribal societies scattered throughout America. Mutants now roam the wastes of north America, killing many survivors of the nuggets. But all of this can be reversed with the E.D.E.N. A device made by the US government just incase Trump were to become president. Now the remnants of the oregon Government calls upon three daring teenagers to save the world(aka america, because america is the world.) in this riveting text adventure: E.D.E.N, The Wastes of OOF\n";
    cout << "REMBER: Type all commands in capital or you're a boob\n";
    system("pause");
    system("CLS");
    commands();
    }
    if(what == 2)
    {
        cout << "Still working on lots of the game so you can't load anything yet\n";
        system("pause");
        system("CLS");
        menu();
    }
    /*else
    {
        cout << "\nDude, what the f*ck, the game's not working. Welp, I guess there's more sh*t to be done you just get to work fixing that, I'll just be jacking off in a corner";
    }*/

}


#endif // MENU2_H_INCLUDED
