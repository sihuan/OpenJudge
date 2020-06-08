#include<bits/stdc++.h>

using namespace std;

class Vehicle

{

private:

int num;

public:

Vehicle(int n):num(n){cout<<"Vehicle has "<<num<<" wheels is created."<<endl;}

~Vehicle(){cout<<"Vehicle has "<<num<<" wheels is erased."<<endl;}

};

class Bus: public Vehicle

{

private:

int guest;

public:

Bus(int n,int g):guest(g),Vehicle(n){cout<<"Bus which can carry "<<guest<<" persons is created."<<endl;cout<<"Bus which can carry "<<guest<<" persons is erased."<<endl;}

~Bus(){}

};

class Truck: public Vehicle

{

private:

int weight;

public:

Truck(int n,int w):weight(w),Vehicle(n){cout<<"Truck which can carry "<<weight<<" tons goods is created."<<endl;cout<<"Truck which can carry "<<weight<<" tons goods is created."<<endl;}

~Truck(){cout<<"Truck which can carry "<<weight<<" tons goods is created."<<endl;}

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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

