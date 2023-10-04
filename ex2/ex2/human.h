#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Human
{
private:
    int height = 192;
    int ears_count = 2;
    double weight = 65.3;
    string name = "Jonathan";
    string eyes_color = "green";
    string noize = "knock";
    int eye = 2;
    bool eye_open = false;

public:

    Human() : Human(192, 2) {}

    Human(int height, int ears_count) : Human (height, ears_count, "Jonathan") {}

    Human(int height, int ears_count, string name) : Human (height, ears_count, name, true) {}

    Human(int height, int ears_cout, string name, bool open) {
        void SetEyes(int eye);
        void SetHeight();
    }

    void MakeNoize(string noize);
    void Eat(string meal);
    void Hobby(string entertainment);
    void Feel();
    void Sleep();
    void Wakeup();
    void OpeningDoor();
    void SetEyes(int eye);
    int GetEyes() const;
    void SetHeight(int height);
};


