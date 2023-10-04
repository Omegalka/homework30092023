#include <iostream>
#include <windows.h>
using namespace std;
class Door
{
private:
    int size = 190;
    int width = 100;
    string color = "brown";
    string kh_color = "gold";
    string handle_size = "black";
    int handle;
    
public:
    void Open();
    void Close();
    void Closing(string key);
    void Opening(string key);
    void SetHandle(int handle);
    int GetHandle() const;
};

