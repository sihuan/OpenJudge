#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <string>

using namespace std;

class Person
{
public:
    Person(){}
    virtual void input()=0;
    virtual void show()=0;
    virtual int pay()=0;
};

class Manager : public Person
{
private:
    string name;
    int base;
public:
    Manager(string _name)
    {
        name=_name;
    }
    void show()
    {
        cout << name << " (Manager)";
    }
    void input()
    {
        cin >> base;
    }
    int pay()
    {
        return base*1000;
    }
};

class Employee : public Person
{
private:
    string name;
    int base;
    int k;
public:
    Employee(string _name)
    {
        name=_name;
    }
    void show()
    {
        cout << name << " (Employee)";
    }
    void input()
    {
        cin >> base>>k;
    }
    int pay()
    {
        return base*1000*(12+k);
    }
};

class HourlyWorker : public Person
{
private:
    string name;
    double base;
    int k;
public:
    HourlyWorker(string _name)
    {
        name=_name;
    }
    void show()
    {
        cout << name << " (HourlyWorker)";
    }
    void input()
    {
        cin >> base>>k;
    }
    int pay()
    {
        return base*k;
    }
};

class CommWorker : public Person
{
private:
    string name;
    double base;
    int k;
public:
    CommWorker(string _name)
    {
        name=_name;
    }
    void show()
    {
        cout << name << " (CommWorker)";
    }
    void input()
    {
        cin >> base>>k;
    }
    int pay()
    {
        return (base*1000*12)+(k*20);
    }
};

int main()
{
    Person *person;
    string name, job;
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        cin >> job >> name;
        if(job == "Manager")
            person = new Manager(name);
        if(job == "Employee")
            person = new Employee(name);
        if(job == "HourlyWorker")
            person = new HourlyWorker(name);
        if(job == "CommWorker")
            person = new CommWorker(name);
        person->input();
        person->show();
        cout << " Annual Salary is " << person->pay() << "." << endl;
    }

}

/**************************************************************
	Problem: 1679
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

