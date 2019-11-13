#include <iostream>
#include <string>

using namespace std;

class Vehicle{
public:
    Vehicle(int n) : num_(n){cout<<"Vehicle has "<<num_<<" wheels is created."<<endl;}
    virtual ~Vehicle() {cout<<"Vehicle has "<<num_<<" wheels is erased."<<endl;}
protected:
    int num_;
};
class Bus:public Vehicle{
public:
    Bus(int n,int g):Vehicle(n),guest_(g){cout<<"Bus which can carry "<<guest_<<" persons is created."<<endl;}
    virtual ~Bus() {cout<<"Bus which can carry "<<guest_<<" persons is erased."<<endl;}
private:
    int guest_;
};
class Truck:public Vehicle{
public:
    Truck(int n,int w):Vehicle(n),weight_(w){cout<<"Truck which can carry "<<weight_<<" tons goods is created."<<endl;}
    virtual ~Truck(){cout<<"Truck which can carry "<<weight_<<" tons goods is created."<<endl;}
private:
    int weight_;
};
int main()
{
    int w, g;
    char t;
    Vehicle *veh;
    while (cin>>w>>t>>g)
    {
        if (t == 'b')
        {
            veh = new Bus(w, g);
        }
        else
        {
            veh = new Truck(w, g);
        }
        delete veh;
    }
    return 0;
}

/**************************************************************
	Problem: 2102
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

