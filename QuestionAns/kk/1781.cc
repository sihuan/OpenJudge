#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <string>
#include <typeinfo>

using namespace std;

class Automobile
{
protected:
    double speed;
public:
    Automobile(){}
    virtual void run() const = 0;
    virtual ~Automobile()
    {
        cout << "An automobile is erased!" << endl;
    }
};

class Benz : public Automobile
{
public:
    Benz(double _speed)
    {
        speed=_speed;
    }
    void run() const
    {
        printf("Benz at speed of %.2lfkm/h.\n",speed);
    }
    ~Benz()
    {
        cout << "A Benz is erased!" << endl;
    }
};

class Buick : public Automobile
{
public:
    Buick(double _speed)
    {
        speed=_speed;
    }
    void run() const
    {
        printf("Buick at speed of %.2lfkm/h.\n",speed);
    }
    ~Buick()
    {
        cout << "A Buick is erased!" << endl;
    }
};

class Zhongba : public Automobile
{
public:
    Zhongba(double _speed)
    {
        speed=_speed;
    }
    void run() const
    {
        printf("Zhongba at speed of %.2lfkm/h.\n",speed);
    }
    ~Zhongba()
    {
        cout << "A Zhongba is erased!" << endl;
    }
};

class Beiqi : public Automobile
{
public:
    Beiqi(double _speed)
    {
        speed=_speed;
    }
    void run() const
    {
        printf("Beiqi at speed of %.2lfkm/h.\n",speed);
    }
    ~Beiqi()
    {
        cout << "A Beiqi is erased!" << endl;
    }
};

class Dayu : public Automobile
{
public:
    Dayu(double _speed)
    {
        speed=_speed;
    }
    void run() const
    {
        printf("Dayu at speed of %.2lfkm/h.\n",speed);
    }
    ~Dayu()
    {
        cout << "A Dayu is erased!" << endl;
    }
};

class Jianghuai : public Automobile
{
public:
    Jianghuai(double _speed)
    {
        speed=_speed;
    }
    void run() const
    {
        printf("Jianghuai at speed of %.2lfkm/h.\n",speed);
    }
    ~Jianghuai()
    {
        cout << "A Jianghuai is erased!" << endl;
    }
};


class Driver
{
public:
    Driver(string _name,char _type)
    {
        name=_name;
        type=_type;
    }
    void Drive(Automobile *automobile);
private:
    string name;
    char type;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

