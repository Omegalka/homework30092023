#include "weights.h"
#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

void Weights::Inclusion(string button_on) {
    cout << "00000" << button_on << "\n";
}
void Weights::Unit(string button_unit) {
    cout << "turn on oz mode" << button_unit << "\n";
}
void Weights::Weighting() {
    cout << "calculating weight" << "\n";
}
void Weights::Light(string light_button) {
    cout << "info platform is glowing";
}
void Weights::SetPcs(int pcs) {
    if (pcs == 1) {
        this->pcs = pcs;   
    }
    else {
        cout << "You don`t have button pcs\n";
    }
}
int Weights::GetPcs() const {
    return pcs;
}
