
#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
class Person
{
public:
    virtual int  input()=0;
    virtual int pay()=0;
    virtual void show()=0;
};
class Manager: public Person
{
public:
    string name;
    int baseMoney;
    Manager(string name):name(name){}
    int input(){cin>>baseMoney;}
    int pay(){return baseMoney*1000;}
    void show(){cout<<name<<" (Manager)";}
};
class Employee:public Person
{
public:
    string name;
    int baseMoney;
    int k;
    Employee(string name):name(name){}
    int input(){cin>>baseMoney>>k;}
    int pay(){return (k+12)*baseMoney*1000;}
    void show(){cout<<name<<" (Employee)";}
};
class HourlyWorker:public Person
{
public:
    string name;
    int baseMoney;
    int k;
    HourlyWorker(string name):name(name){}
    int input(){cin>>baseMoney>>k;}
    int pay(){return baseMoney*k;}
    void show(){cout<<name<<" (HourlyWorker)";}
};
class CommWorker:public Person
{
public:
    string name;
    int baseMoney;
    int k;
    CommWorker(string name):name(name){}
    int input(){cin>>baseMoney>>k;}
    int pay(){return baseMoney*1000*12+k*20;}
    void show(){cout<<name<<" (CommWorker)";}
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

