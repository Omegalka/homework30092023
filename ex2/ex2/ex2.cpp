#include <iostream>
#include <windows.h>
using namespace std;

//class mobile {
//private:
//    string model;
//    int battery;
//    int price;
//public:
//    void setbattery(int b) {
//        if (b >= 0 and b <= 100) {
//            battery = b;
//        }
//        else {
//            cout << "No\n";
//        }
//    }
//    int getbattery() const {
//        return battery;
//    }
//    void setprice(int price) {
//        if (price >= 0)
//        {
//            this->price = price;
//        }
//        else
//        {
//            cout << "no\n";
//        }
//    }
//    void setmodel(double model) {
//        if (model >= 1 and model <= 15)
//        {
//            this->model = model;   
//        }
//        else {
//            cout << "No\n";
//        }
//    }
//    string model() const {
//        return model;
//    }
//};

#include "mobile_phone.h"
#include "human.h"
#include "weights.h"
#include "door.h"
#include "room.h"

int main()
{
    MobilePhone m;
    Human a;
    Human b(192, 2);
    Human c(192, 2, "Jonathan");
    Human d(192, 2, "Jonathan", true);
}




