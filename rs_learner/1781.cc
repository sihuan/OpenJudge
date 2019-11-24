#include<bits/stdc++.h>
using namespace std;
class Automobile
{
protected:
    double speed;
public:
    Automobile(double _speed):speed(_speed){}
    virtual ~Automobile()
    {
        cout<<"An automobile is erased!"<<endl;
    }
    virtual void run()const =0;
};
class Benz:public Automobile
{
public:
    Benz(double _speed=0):Automobile(_speed){}
    ~Benz()
    {
    cout<<"A Benz is erased!"<<endl;
    }
    void run()const
    {
        cout<<"Benz at speed of "<<fixed<<setprecision(2)<<speed<<"km/h."<<endl;
    }
};
class Buick:public Automobile
{
public:
    Buick(double _speed=0):Automobile(_speed){}
    ~Buick()
    {
    cout<<"A Buick is erased!"<<endl;
    }
    void run()const
    {
        cout<<"Buick at speed of "<<fixed<<setprecision(2)<<speed<<"km/h."<<endl;
    }
};
class Zhongba:public Automobile
{
public:
    Zhongba(double _speed=0):Automobile(_speed){}
    ~Zhongba()
    {
    cout<<"A Zhongba is erased!"<<endl;
    }
    void run()const
    {
        cout<<"Zhongba at speed of "<<fixed<<setprecision(2)<<speed<<"km/h."<<endl;
    }
};
class Beiqi:public Automobile
{
public:
    Beiqi(double _speed=0):Automobile(_speed){}
    ~Beiqi()
    {
    cout<<"A Beiqi is erased!"<<endl;
    }
    void run()const
    {
        cout<<"Beiqi at speed of "<<fixed<<setprecision(2)<<speed<<"km/h."<<endl;
    }
};
class Dayu:public Automobile
{
public:
    Dayu(double _speed=0):Automobile(_speed){}
    ~Dayu()
    {
    cout<<"A Dayu is erased!"<<endl;
    }
    void run()const
    {
        cout<<"Dayu at speed of "<<fixed<<setprecision(2)<<speed<<"km/h."<<endl;
    }
};
class Jianghuai:public Automobile
{
public:
    Jianghuai(double _speed=0):Automobile(_speed){}
    ~Jianghuai()
    {
    cout<<"A Jianghuai is erased!"<<endl;
    }
    void run()const
    {
        cout<<"Jianghuai at speed of "<<fixed<<setprecision(2)<<speed<<"km/h."<<endl;
    }
};
class Driver
{
private:
    string name;
    char type;
public:
    Driver(string _name,char _type):name(_name),type(_type){}
    void Drive(Automobile *automobile);
    ~Driver(){}
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1276 kb
****************************************************************/

