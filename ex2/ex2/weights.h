#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Weights
{
private:
    int size = 11;
    int width = 5;
    string color = "gray";
    string weight_plat = "blue";
    int button = 5;
    string fuction = "weighting";
    int pcs;

public:
    void Inclusion(string button_on);
    void Unit(string button_unit);
    void Weighting();
    void Light(string light_button);
    void SetPcs(int pcs);
    int GetPcs() const;
};

