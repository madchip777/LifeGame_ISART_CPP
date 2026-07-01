//
// Created by madchip on 6/26/26.
//

#include <iostream>
#include <ctime>

#include "MainMenu.h"
#include "ConsoleControls.h"

using namespace std;

int StartMenu() {
    time_t timestamp;
    time(&timestamp);

    cout << "Hello the world, " << ctime(&timestamp) << endl;

    string question1 = "Choose option :";
    string choice1 = "0 - Create map ";
    string choice2 = "1 - Load a map";
    string choice3 = "2 - Quit";

    switch (AskUser(question1, choice1, choice2, choice3)) {
        case 0:
            cout << "Creating a new map" << endl;
            // TODO CREATE MAP MENU
            break;
        case 1:
            cout << "Loading a map..." << endl;
            // TODO import .txt map
            break;
        case 2:
            cout << "Quitting, bye!" << endl;
            break;
        default:
            break;
    }

    return 0;
}



