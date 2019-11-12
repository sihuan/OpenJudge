#include <bits/stdc++.h>

using namespace std;
int  NumOfVechicles=0;
class Vechicle
{
protected:
    int sp;
public:
    Vechicle(int spp):sp(spp)
    {
        NumOfVechicles++;
    }
    virtual ~Vechicle()
    {
        cout<<"A vechicle is deleted."<<endl;
    }
    int spp(){return sp;}
    static int getNumOfVechicles() {return NumOfVechicles;}
    virtual void show()=0;
};

class Bike:public Vechicle
{
public:
    Bike(int n):Vechicle(n){}
    void show()
    {
        cout << " A bike's speed is " << Vechicle::spp() <<"km/h." << endl;
    }
    ~Bike()
    {
        cout << "A bike is deleted." << endl;
    }
};

class Car:public Vechicle
{
public:
    Car(int n):Vechicle(n){}
    void show()
    {
        cout << " A car's speed is " << Vechicle::spp() <<"km/h." << endl;
    }
     ~Car()
    {
        cout << "A car is deleted." << endl;
    }
};

class MotoBike:public Vechicle
{
public:
    MotoBike(int n):Vechicle(n){}
    void show()
    {
        cout << " A motobike's speed is " << Vechicle::spp()<<"km/h." << endl;
    }
    ~MotoBike()
    {
        cout << "A motobike is deleted." << endl;
    }
};

class Person
{
    string name;
public:

    Person(string n):name(n){}
    void drive(Vechicle &p)
    {
        cout<<name<<" drives.";
        p.show();
    }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

