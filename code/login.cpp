#include <iostream>

#include "login.h"

using namespace std;

int login::userLogin() {
    string username;
    cout << "Enter your username: " << endl;
    cin >> username;
    cout << endl;

    //seperate into function later
    if(username == "Gency") {
        return 0;
    }

    else if(username == "!") {
        return 1;
    }
    
    else {
        cout << "Press ! to quit" << endl << endl;
        return 2;
    }
}