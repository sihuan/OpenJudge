#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;


class Car {
        static int cnum;
        double spd;
public:
        Car (double s=0):spd(s) {cnum++; cout << "The " << cnum << "th car is created." << endl;}
        //~Car () {cnum--; cout << "The " << cnum+1 << "th car is erased." << endl;}
        double getspd () {return spd;}
        void setSpeed (double s) {spd = s;}
};

int Car::cnum = 0;

int onum = 0, eenum = 0;

class OilCar: public Car {
        static int ocnum;
        double consm;
public:
        OilCar (double s=0, double o=0):Car(s),consm(o) {ocnum++; cout << "The " << ocnum << "th oil-car is created." << endl;}
        //~OilCar () {ocnum--; cout << "The " << ocnum+1 << "th oil-car is erased." << endl;}
        void show () {cout << "An oil-car at speed of " << getspd() << "km/s, with " << consm << "L/100km." << endl;}
        void setOil (double cm) {consm = cm;}
};

int OilCar::ocnum = 0;

class ElecCar: public Car {
        double consm;
        static int ecnum;
public:
        ElecCar (double spd=0, double e=0):Car(spd),consm(e) {ecnum++; cout << "The " << ecnum << "th electrical car is created." << endl;}
        //~ElecCar () {ecnum--; cout << "The " << ecnum+1 << "th electrical car is erased." << endl;}
        void show () {cout << "An electrical car at speed of " << getspd() << "km/s, with " << consm << "KW/100km." << endl;}
        void setPower (double p) {consm = p;}
};

int ElecCar::ecnum = 0;

class CarHall {
        OilCar oc[10];
        ElecCar ec[10];
public:
        void getInfo() {
                char ch;
                double spd, csm;
                int n, t;
                cin >> n;
                while (n--) {
                        cin >> ch >> spd >>  csm;
                        if (ch == 'o') {
                                oc[onum].setSpeed(spd);
                                oc[onum].setOil(csm);
                                onum++;
                        } else if (ch == 'e') {
                                ec[eenum].setSpeed(spd);
                                ec[eenum].setPower(csm);
                                eenum++;
                        }
                }
        }
        void showInfo () {
                cout << "We have " << onum << " oil-cars, which are:" << endl;
                for (int i = 0; i < onum; i++) oc[i].show();
                cout << "We have " << eenum << " electrical cars, which are:" << endl;
                for (int i = 0; i < eenum; i++) ec[i].show();
        }
};

int main()
{
    Car car;
    OilCar oilcar;
    ElecCar eleccar;
    CarHall carhall;
    carhall.getInfo();
    carhall.showInfo();
    return 0;
}
/**************************************************************
	Problem: 2200
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

