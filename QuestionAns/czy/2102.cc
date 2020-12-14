#include <bits/stdc++.h>

using namespace std;
class Vehicle
{
    int num;
public:
    int nn() {return num;}
    Vehicle(int n):num(n){cout<<"Vehicle has "<<nn()<<" wheels is created."<<endl;}
    virtual ~Vehicle() {cout<<"Vehicle has "<<nn()<<" wheels is erased."<<endl;}
};
class Bus: public Vehicle
{
    int guest;
public:
    int gu(){return guest;}
    Bus(int n,int g):Vehicle(n),guest(g)
    {
        cout<<"Bus which can carry "<<gu()<<" persons is created."<<endl;
    }

   ~Bus(){cout<<"Bus which can carry "<<gu()<<" persons is erased."<<endl;}

};
class Truck: public Vehicle
{
    int weight;
public:
    int we() {return weight;}
    Truck(int w,int g):Vehicle(w),weight(g)
    {
        cout<<"Truck which can carry "<<we()<<" tons goods is created."<<endl;
    }
   ~Truck(){cout<<"Truck which can carry "<<we()<<" tons goods is created."<<endl;}

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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

