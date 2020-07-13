#include <iostream>
#include <string>
using namespace std;

class Vechicle {
protected:
    int speed_;
    static int nov_;

public:
    Vechicle(double s)
        : speed_(s)
    {
        nov_++;
    }
    virtual ~Vechicle()
    {
        cout << "A vechicle is deleted." << endl;
    }
    static int getNumOfVechicles()
    {
        return nov_;
    }
    virtual void show() = 0;
};

class Person {
protected:
    string name_;

public:
    Person(string n)
        : name_(n)
    {
    }
    void drive(Vechicle& v)
    {
        cout << name_ << " drives. ";
        v.show();
    }
};

class Bike : public Vechicle {
public:
    Bike(double s)
        : Vechicle(s)
    {
    }
    ~Bike()
    {
        cout << "A bike is deleted." << endl;
    }
    void show()
    {
        cout << "A bike's speed is " << speed_ << "km/h." << endl;
    }
};

class MotoBike : public Vechicle {
public:
    MotoBike(double s)
        : Vechicle(s)
    {
    }
    ~MotoBike()
    {
        cout << "A motobike is deleted." << endl;
    }
    void show()
    {
        cout << "A motobike's speed is " << speed_ << "km/h." << endl;
    }
};

class Car : public Vechicle {
public:
    Car(double s)
        : Vechicle(s)
    {
    }
    ~Car()
    {
        cout << "A car is deleted." << endl;
    }
    void show()
    {
        cout << "A car's speed is " << speed_ << "km/h." << endl;
    }
};

int Vechicle::nov_ = 0;

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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

