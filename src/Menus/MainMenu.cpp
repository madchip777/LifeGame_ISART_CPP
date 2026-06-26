//
// Created by madchip on 6/26/26.
//

#include <iostream>
#include <ctime>

using namespace std;

int StartMenu() {
    time_t timestamp;
    time(&timestamp);

    cout << "Hello the world " << ctime(&timestamp) << endl;
    return 0;
}

