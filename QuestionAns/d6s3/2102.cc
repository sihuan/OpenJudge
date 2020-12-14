#include <iostream>
#include <string>
using namespace std;

class Vehicle {
private:
    int num_;

public:
    Vehicle(int n)
        : num_(n)
    {
        cout << "Vehicle has " << num_ << " wheels is created." << endl;
    }
    virtual ~Vehicle()
    {
        cout << "Vehicle has " << num_ << " wheels is erased." << endl;
    }
};

class Bus : public Vehicle {
private:
    int guest_;

public:
    Bus(int w, int g)
        : Vehicle(w)
        , guest_(g)
    {
        cout << "Bus which can carry " << guest_ << " persons is created." << endl;
    }
    ~Bus()
    {
        cout << "Bus which can carry " << guest_ << " persons is erased." << endl;
    }
};

class Truck : public Vehicle {
private:
    int weight_;

public:
    Truck(int wl, int wg)
        : Vehicle(wl)
        , weight_(wg)
    {
        cout << "Truck which can carry " << weight_ << " tons goods is created." << endl;
    }
    ~Truck()
    {
        cout << "Truck which can carry " << weight_ << " tons goods is created." << endl;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

