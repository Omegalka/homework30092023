#include "mobile_phone.h"
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

    void MobilePhone::Noize(string alarm) {
        cout << "Time to wake up!" << alarm << "\n";
    }
    void MobilePhone::Call(string ringtone) {
        cout << "Someone is calling!" << ringtone << "\n";
    }
    void MobilePhone::Count(string calculator) {
        cout << "how much will it be?" << calculator << "\n";
    }
    void MobilePhone::Update() {
        cout << "Your iphone is updating...\n";
    }
    void MobilePhone::Discharge() {
        cout << "little quantity of energy left\n";
    }
    void MobilePhone::SetBattery(int battery) {
        if (battery >= 0 and battery <= 100) {
            this->battery = battery;   //21.09.23
        }
        else {
            cout << "No\n";
        }
    }
    int MobilePhone::GetBattery() const {
        return battery;
    }
    void MobilePhone::SetBrand(string brand)
    {
        this->brand = brand;
    }
    string MobilePhone::GetBrand()const {
        return brand;
    }
    void MobilePhone::SetAlarm(string alarm) {
        this->alarm = alarm;
    }
    string MobilePhone::GetAlarm()const {
        return alarm;
    }
    void MobilePhone::SetSerialNumber(int serial_number) {
        this->serial_number = serial_number;
    }
    int MobilePhone::GetSerialNumber() const {
        return serial_number;
    }
    void MobilePhone::SetColor(string color) {
        this->color = color;
    }
    string MobilePhone::GetColor() const {
        return color;
    }
