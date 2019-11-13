#include <iostream>

using namespace std;

class Vechicle{
public:
    static int numOfVechicles;
    static int getNumOfVechicles() {return numOfVechicles;}
    Vechicle(int s) : speed_(s){++numOfVechicles;}
    virtual ~Vechicle() {cout<<"A vechicle is deleted."<<endl;}
    virtual void show() const = 0;
protected:
    int speed_;
};
class Bike:public Vechicle{
public:
    Bike(int s) : Vechicle(s){}
    virtual ~Bike() {cout<<"A bike is deleted."<<endl;}
    void show() const {cout<<"A bike's speed is "<<speed_<<"km/h."<<endl;}
};
class MotoBike:public Vechicle{
public:
    MotoBike(int s) : Vechicle(s){}
    virtual ~MotoBike() {cout<<"A motobike is deleted."<<endl;}
    void show() const {cout<<"A motobike's speed is "<<speed_<<"km/h."<<endl;}
};
class Car:public Vechicle{
public:
    Car(int s) : Vechicle(s){}
    virtual ~Car() {cout<<"A car is deleted."<<endl;}
    void show() const {cout<<"A car's speed is "<<speed_<<"km/h."<<endl;}
};
class Person{
public:
    Person(string name) : name_(name){}
    void drive(Vechicle& v){
        cout<<name_<<" drives. ";
        v.show();
    }
private:
    string name_;
};


int Vechicle::numOfVechicles = 0;

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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

