#include<iostream>
#include<algorithm>
#include<typeinfo>
#include<iomanip>

using namespace std;

class Automobile
{
public:
    double speed;
public:
    Automobile(double spe=0):speed(spe){}
    virtual void run()const =0;
    virtual ~Automobile(){cout<<"An automobile is erased!"<<endl;}
};

class Benz:public Automobile
{
public:
    double speed;
    Benz(double spe):speed(spe){}
    virtual ~Benz(){cout<<"A Benz is erased!"<<endl;}
    void run()const
    {cout<<"Benz at speed of "<< fixed << setprecision(2)<<speed<<"km/h."<<endl;}
};

class Buick:public Automobile
{
public:
     double speed;
    Buick(double spe):speed(spe){}
    virtual ~Buick(){cout<<"A Buick is erased!"<<endl;}
    void run()const {cout<<"Buick at speed of "<< fixed << setprecision(2)<<speed<<"km/h."<<endl;}

};

class Zhongba:public Automobile
{
public:
     double speed;
    Zhongba(double spe):speed(spe){}
    virtual ~Zhongba(){cout<<"A Zhongba is erased!"<<endl;}
    void run()const
    {cout<<"Zhongba at speed of "<< fixed << setprecision(2)<<speed<<"km/h."<<endl;}
};

class Beiqi:public Automobile
{
public:
     double speed;
    Beiqi(double spe):speed(spe){}
    virtual ~Beiqi(){cout<<"A Beiqi is erased!"<<endl;}
    void run()const{ cout<<"Beiqi at speed of "<< fixed << setprecision(2)<<speed<<"km/h."<<endl;}
};

class Dayu:public Automobile
{
public:
     double speed;
    Dayu(double spe):speed(spe){}
    virtual ~Dayu(){cout<<"A Dayu is erased!"<<endl;}
    void run()const { cout<<"Dayu at speed of "<< fixed << setprecision(2)<<speed<<"km/h."<<endl;}
};

class Jianghuai:public Automobile
{
public:
     double speed;
    Jianghuai(double spe):speed(spe){}
    virtual ~Jianghuai(){cout<<"A Jianghuai is erased!"<<endl;}
    void run()const {cout<<"Jianghuai at speed of "<< fixed << setprecision(2)<<speed<<"km/h."<<endl;}
};



class Driver
{
public:
    string name;
    char type;
public:
    Driver(string na, char ty):name(na),type(ty){}
    ~Driver(){}
    void Drive(Automobile *automobile);
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1276 kb
****************************************************************/

