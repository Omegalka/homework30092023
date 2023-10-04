#include "door.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void Door::Open() {
    cout << "door is opening\n";
}
void Door::Close() {
    cout << "door is closing\n";
}
void Door::Closing(string key) {
    cout << "door is closing with a key" << key << "\n";
}
void Door::Opening(string key) {
    cout << "door is opening with a key" << key << "\n";
}
void Door::SetHandle(int handle) {
    if (handle == 1)
    {
        this->handle = handle;    
    }
    else {
        cout << "You don`t have handle\n";
    }
}
int Door::GetHandle() const {
    return handle;
}
