#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
class Room
{
private:
    int height = 250;
    int width = 500;
    int window;
    string name = "bedroom";
    string walls_color = "yellow";
public:
    void Noize();
    void Exist();
    void Destroy();
    void Repair();
    void Feel();
    void SetWindow(int window);
    int GetWindow() const;
};

