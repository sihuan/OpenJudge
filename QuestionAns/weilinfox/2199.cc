#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

class Car {
        static int cnum;
        double spd;
public:
        Car (double s):spd(s) {cnum++; cout << "The " << cnum << "th car is created." << endl;}
        ~Car () {cout << "The " << cnum << "th car is erased." << endl; cnum--;}
        double getspd () {return spd;}
};

int Car::cnum = 0;

class OilCar: public Car {
        static int ocnum;
        double consm;
public:
        OilCar (double s, double o):Car(s),consm(o) {ocnum++; cout << "The " << ocnum << "th oil-car is created." << endl;}
        ~OilCar () {cout << "The " << ocnum << "th oil-car is erased." << endl; ocnum--;}
        void show () {cout << "An oil-car at speed of " << getspd() << "km/s, with " << consm << "L/100km." << endl;}
};

int OilCar::ocnum = 0;

class ElecCar: public Car {
        double consm;
        static int ecnum;
public:
        ElecCar (double spd, double e):Car(spd),consm(e) {ecnum++; cout << "The " << ecnum << "th electrical car is created." << endl;}
        ~ElecCar () {cout << "The " << ecnum << "th electrical car is erased." << endl; ecnum--;}
        void show () {cout << "An electrical car at speed of " << getspd() << "km/s, with " << consm << "KW/100km." << endl;}
};

int ElecCar::ecnum = 0;


int main()
{
    double power, oil, speed;
    cin>>speed>>oil;
    OilCar one(speed, oil);
    one.show();
    cin>>speed>>power;
    ElecCar two(speed, power);
    two.show();
    return 0;
}
/**************************************************************
	Problem: 2199
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

