
#include <iostream>
#include <string>
using namespace std;
class Vechicle
{
protected:
    int speed;
    static int numOfVechicle;
public:
    Vechicle(int sp) : speed(sp)
    {
        numOfVechicle++;
    }
    virtual~Vechicle()
    {
        cout << "A vechicle is deleted." << endl;
    }
    static int getNumOfVechicles()
    {
        return numOfVechicle;
    }
public:
    virtual void show()const = 0;
};
class Bike :virtual public Vechicle
{
public:
    void show()const
    {
        cout << "A bike\'s speed is " << speed << "km/h." << endl;
    }
public:
    Bike(int s) : Vechicle(s) { }
    ~Bike()
    {
        cout << "A bike is deleted." << endl;
    }
 
};
class MotoBike :virtual public Vechicle
{
public:
    void show() const
    {
        cout << "A motobike\'s speed is " << speed << "km/h." << endl;
    }
public:
    MotoBike(int s) : Vechicle(s) { }
    ~MotoBike()
    {
        cout << "A motobike is deleted." << endl;
    }
 
};
class Car :virtual public Vechicle
{
public:
    void show() const
    {
        cout << "A car\'s speed is " << speed << "km/h." << endl;
    }
public:
    Car(int s) : Vechicle(s) { }
    ~Car()
    {
        cout << "A car is deleted." << endl;
    }
 
};
 
class Person
{
private:
    string name;
public:
    Person(string n) : name(n) {  }
    ~Person() {  }
public:
     void drive(Vechicle& v) const
     {
         cout << name << " drives. ";
         v.show();
     }
};
int Vechicle :: numOfVechicle = 0;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

