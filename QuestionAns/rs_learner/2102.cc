#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class Vehicle
{
protected:
    int num;
public:
    Vehicle(int n):num(n)
    {
        cout<<"Vehicle has "<<num<<" wheels is created."<<endl;
    }
    virtual ~Vehicle()
    {
        cout<<"Vehicle has "<<num<<" wheels is erased."<<endl;
    }
};
class Bus:public Vehicle
{
    int g;
public:
    Bus(int _n,int _g):Vehicle(_n),g(_g)
    {
        cout<<"Bus which can carry "<<g<<" persons is created."<<endl;
    }
    ~Bus()
    {
        cout<<"Bus which can carry "<<g<<" persons is erased."<<endl;
    }
};
class Truck:public Vehicle
{
    int w;
public:
    Truck(int _n,int _w):Vehicle(_n),w(_w)
    {
        cout<<"Truck which can carry "<<w<<" tons goods is created."<<endl;
    }
    ~Truck()
    {
        cout<<"Truck which can carry "<<w<<" tons goods is created."<<endl;
    }
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

