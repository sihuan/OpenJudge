#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;


class Automobile {
public:
    double speed;
    Automobile (double s):speed(s) {}
    virtual ~Automobile(){cout << "An automobile is erased!" << endl;}
    virtual void run () const = 0;
};

class Benz: public Automobile {
public:
    Benz(double s):Automobile(s) {}
    ~Benz() {cout << "A Benz is erased!" << endl;}
    void run () const {
        cout << setprecision(2) << fixed << \
        "Benz at speed of " << speed << "km/h." << endl;
    }
};

class Buick: public Automobile {
public:
    Buick (double s):Automobile(s) {}
    ~Buick () {cout << "A Buick is erased!" << endl;}
    void run () const {
        cout << setprecision(2) << fixed << \
        "Buick at speed of " << speed << "km/h." << endl;
    }
};

class Zhongba: public Automobile {
public:
    Zhongba (double s): Automobile(s) {}
    ~Zhongba () {cout << "A Zhongba is erased!" << endl;}
    void run () const {
        cout << setprecision(2) << fixed << \
        "Zhongba at speed of " << speed << "km/h." << endl;
    }
};

class Beiqi: public Automobile {
public:
    Beiqi (double s):Automobile(s) {}
    ~Beiqi () {cout << "A Beiqi is erased!" << endl;}
    void run () const {
        cout << setprecision(2) << fixed << \
        "Beiqi at speed of " << speed << "km/h." << endl;
    }
};

class Dayu: public Automobile {
public:
    Dayu (double s):Automobile(s) {}
    ~Dayu () {cout << "A Dayu is erased!" << endl;}
    void run () const {
        cout << setprecision(2) << fixed << \
        "Dayu at speed of " << speed << "km/h." << endl;
    }
};

class Jianghuai: public Automobile {
public:
    Jianghuai (double s):Automobile(s) {}
    ~Jianghuai () {cout << "A Jianghuai is erased!" << endl;}
    void run () const {
        cout << setprecision(2) << fixed << \
        "Jianghuai at speed of " << speed << "km/h." << endl;
    }
};

class Driver {
private:
    string name; char type;
public:
    Driver (string n, char t):name(n),type(t) {}
    void Drive (Automobile *);
};

void Driver::Drive(Automobile *automobile)
{
    switch (type)
    {
    case 'A':
        cout<<"Driver "<<name<<" can drive ";
        automobile->run();
        break;
    case 'B':
        if (typeid(*automobile) == typeid(Dayu) || typeid(*automobile) == typeid(Jianghuai))
            cout<<"Driver "<<name<<" cannot drive large bus."<<endl;
        else
        {
            cout<<"Driver "<<name<<" can drive ";
            automobile->run();
        }
        break;
    case 'C':
        if (typeid(*automobile) != typeid(Benz) && typeid(*automobile) != typeid(Buick))
            cout<<"Driver "<<name<<" cannot drive bus."<<endl;
        else
        {
            cout<<"Driver "<<name<<" can drive ";
            automobile->run();
        }
        break;
    }
}
int main()
{
    string name;
    char type;
    double speed;
    char automobileType;
    int cases;
    Automobile *automobile;


    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>name>>type>>automobileType>>speed;
        Driver driver(name, type);
        switch (automobileType)
        {
        case 'a':
            automobile = new Benz(speed);
            break;
        case 'b':
            automobile = new Buick(speed);
            break;
        case 'c':
            automobile = new Zhongba(speed);
            break;
        case 'd':
            automobile = new Beiqi(speed);
            break;
        case 'e':
            automobile = new Dayu(speed);
            break;
        case 'f':
            automobile = new Jianghuai(speed);
            break;
        }
        driver.Drive(automobile);
        delete automobile;
    }
    return 0;
}
/**************************************************************
	Problem: 1781
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1276 kb
****************************************************************/

