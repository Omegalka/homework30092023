#include "human.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void Human::MakeNoize(string noize) {
    cout << "Jonathan is knocking!" << noize << "\n";
}
void Human::Eat(string meal) {
    cout << "Jonathan is eating" << meal << "\n";
}
void Human::Hobby(string entertainment) {
    cout << "Jonathan is playing games" << entertainment << "\n";
}
void Human::Feel() {
    cout << "Jonathan is stressed\n";
}
void Human::Sleep() {
    cout << "Jonathan is sleeping\n";
}
void Human::Wakeup() {
    cout << "Jonathan is wake up\n";
}
void Human::OpeningDoor() {
    cout << "Jonathan is opening door\n";
}
void Human::SetEyes(int eye) {
    if (eye >= 0 and eye <= 2) {   
        this->eye = eye;
    }
    else {
        cout << "You are unusual human\n";
    }
}
int Human::GetEyes() const {
    return eye;
}
void Human::SetHeight(int height) {
    this->height = height;

}
