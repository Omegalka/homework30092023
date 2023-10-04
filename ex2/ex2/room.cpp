#include "room.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

    void Room::Noize() {
        cout << "Someone knocking on the door\n";
    }
    void Room::Exist() {
        cout << "Room is existing\n";
    }
    void Room::Destroy() {
        cout << "Walls are falling\n";
    }
    void Room::Repair() {
        cout << "room is repared by humans\n";
    }
    void Room::Feel() {
        cout << "room can`t feel anything, maybe";
    }
    void Room::SetWindow(int window) {
        if (window >= 0) {
            this->window = window;    
        }
        else {
            cout << "your room have windows\n";
        }
    }
    int Room::GetWindow() const {
        return window;
    }
