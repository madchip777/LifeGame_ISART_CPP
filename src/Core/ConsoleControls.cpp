//
// Created by madchip on 6/26/26.
//

#include <iostream>
#include <limits>

using namespace std;

int AskUser(string &question1, string &choice1, string &choice2, string &choice3, int previously = 0 ) {
    if (previously == 1) {
        cout << endl << "Choice did not register, try again or quit (CTRL+C) :" << endl << endl;
    }
    if (previously == 2) {
        cout << endl << "Failed to enter proper choice, quitting now." << endl << endl;
        return -1;
    }

    cout << question1 << endl;
    cout << "0 - " << choice1 << endl;
    cout << "1 - " << choice2 << endl;
    cout << "2 - " << choice3 << endl;

    int choice = 0;

    if (!(cin >> choice)) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        choice = -1;
    }

    switch (choice) {
        case 0:
            choice = 0;
            break;
        case 1:
            choice = 1;
            break;
        case 2:
            choice = 2;
            break;
        default:
            choice = AskUser(question1, choice1, choice2, choice3, previously + 1);
            break;
    }
    return choice;
}


