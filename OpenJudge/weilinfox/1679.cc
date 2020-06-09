#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Person {
public:
    virtual void input() = 0;
    virtual int pay() = 0;
    virtual void show() = 0;
};

class Manager: public Person {
    string name;
    int baseMoney;
public:
    Manager (string n):name(n) {}
    void input () {cin >> baseMoney;}
    int pay() {return baseMoney * 1000;}
    void show () {cout << name << " (Manager)";}
};

class Employee: public Person {
    string name ;
    int baseMoney;
    int ky;
public:
    Employee (string n):name(n) {}
    void input() {cin >> baseMoney >> ky;}
    int pay () {return (ky+12) * baseMoney * 1000;}
    void show (){cout << name << " (Employee)";}
};



class HourlyWorker:public Person {
    string name;
    int baseMoney;
    int ky;
public:
    HourlyWorker (string n):name(n) {}
    void input() {cin >> baseMoney >> ky;}
    int pay() {return baseMoney * ky;}
    void show() {cout << name << " (HourlyWorker)";}
};

class CommWorker:public Person {
    string name;
    int baseMoney;
    int ky;
public:
    CommWorker(string n):name(n){}
    void input() {cin >> baseMoney >> ky;}
    int pay() {return baseMoney * 1000 * 12 + ky * 20;}
    void show() {cout << name << " (CommWorker)";}

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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

