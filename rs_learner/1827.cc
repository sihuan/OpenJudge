#include<bits/stdc++.h>
using namespace std;
class Vechicle
{
protected:
    int speed;
    static int numOfVechicles;
public:
    Vechicle(int _speed):speed(_speed){numOfVechicles++;}
    virtual ~Vechicle(){cout<<"A vechicle is deleted."<<endl;}
    static int getNumOfVechicles(){return numOfVechicles;}
    virtual void show()=0;
};
class Bike:public Vechicle
{
public:
    Bike(int _speed):Vechicle(_speed){}
    ~Bike(){cout<<"A bike is deleted."<<endl;}
    void show(){cout<<"A bike's speed is "<<speed<<"km/h."<<endl;}
};
class MotoBike:public Vechicle
{
public:
    MotoBike(int _speed):Vechicle(_speed){}
    ~MotoBike(){cout<<"A motobike is deleted."<<endl;}
    void show(){cout<<"A motobike's speed is "<<speed<<"km/h."<<endl;}
};
class Car:public Vechicle
{
public:
    Car(int _speed):Vechicle(_speed){}
    ~Car(){cout<<"A car is deleted."<<endl;}
    void show(){cout<<"A car's speed is "<<speed<<"km/h."<<endl;}
};
class Person
{
private:
    string name;
public:
    Person(string _name):name(_name){}
    ~Person(){}
    void drive(Vechicle &v)
    {
        cout<<name<<" drives. ";
        v.show();
    }
};
int Vechicle::numOfVechicles=0;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

