#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name_;
    int base_, salary_, bonus_;

public:
    Person(string n): name_(n) {}
    virtual void input() = 0;
    virtual void show() = 0;
    virtual int pay() = 0;
};

class Manager : public Person {
public:
    Manager(string n)
        : Person(n)
    {
    }
    void input()
    {
        cin >> base_;
    }
    int pay()
    {
        return base_ * 1000;
    }
    void show()
    {
        cout << name_ << " (Manager)";
    }
};

class Employee : public Person {
public:
    Employee(string n)
        : Person(n)
    {
    }
    void input()
    {
        cin >> base_ >> bonus_;
    }
    int pay()
    {
        return (base_ * 1000) * (12 + bonus_);
    }
    void show()
    {
        cout << name_ << " (Employee)";
    }
};

class HourlyWorker : public Person {
public:
    HourlyWorker(string n)
        : Person(n)
    {
    }
    void input()
    {
        cin >> base_ >> bonus_;
    }
    int pay()
    {
        return base_ * bonus_;
    }
    void show()
    {
        cout << name_ << " (HourlyWorker)";
    }
};

class CommWorker : public Person {
public:
    CommWorker(string n)
        : Person(n)
    {
    }
    void input()
    {
        cin >> base_ >> bonus_;
    }
    int pay()
    {
        return (base_ * 1000 * 12) + bonus_ * 20;
    }
    void show()
    {
        cout << name_ << " (CommWorker)";
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

