#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Vechicle {
    static int novk;
public:
    int speed;
    static int getNumOfVechicles() {return novk;}
    Vechicle (int s):speed(s) {novk++;}
    virtual ~Vechicle () {cout << "A vechicle is deleted." << endl;}
    virtual void show () const = 0;
};

int Vechicle::novk = 0;

class Bike: public Vechicle {
public:
    Bike (double s):Vechicle(s) {}
    ~Bike () {cout << "A bike is deleted." << endl;}
    void show () const {cout << " A bike's speed is " << speed << "km/h." << endl;}
};

class MotoBike: public Vechicle {
public:
    MotoBike (double s):Vechicle(s) {}
    ~MotoBike () {cout << "A motobike is deleted." << endl;}
    void show () const {cout << " A motobike's speed is " << speed << "km/h." << endl;}
};

class Car: public Vechicle {
public:
    Car (double s):Vechicle(s) {}
    ~Car () {cout << "A car is deleted." << endl;}
    void show () const {cout << " A car's speed is " << speed << "km/h." << endl;}
};

class Person {
    string name;
public:
    Person (string n):name(n) {}
    void drive (Vechicle& v) {cout << name << " drives."; v.show();}
};


int main()
{
    int cases, n;
    char c;
    string name;
    Vechicle* vechicle;
    cout<<"In beginning, we have "<<Vechicle::getNumOfVechicles()<<" vechicles."<<endl;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>name>>c>>n;
        Person person(name);
        switch (c)
        {
        case 'B':
            vechicle = new Bike(n);
            break;
        case 'M':
            vechicle = new MotoBike(n);
            break;
        case 'C':
            vechicle = new Car(n);
            break;
        }
        person.drive(*vechicle);
        delete vechicle;
    }
    cout<<"At the end, we have "<<Vechicle::getNumOfVechicles()<<" vechicles."<<endl;
    return 0;
}
/**************************************************************
	Problem: 1827
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

