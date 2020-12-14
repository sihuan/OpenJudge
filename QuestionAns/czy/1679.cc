#include <bits/stdc++.h>

using namespace std;
class Person
{
protected:
    string name;
public:
    Person(string name2):name(name2){}
    virtual void input() = 0;
    virtual void show() = 0;
    virtual int pay() = 0;

};
class Manager : public Person
{
    int money;
public:
    Manager(string name2):Person(name2){}
    void input(){cin >> money;}
    void show(){cout << name << " (Manager)";}
    int pay(){return money*1000;}

};

class Employee : public Person
{
    int money;
    int extra;
public:
    Employee(string name2):Person(name2){}
    void input(){cin >> money>>extra;}
    void show(){cout << name << " (Employee)";}
     int pay(){return money * (extra+12) *1000;}
};

class HourlyWorker : public Person
{
    int hour;
    int money;
public:
    HourlyWorker(string name2):Person(name2){}
    void input(){cin >> money >>hour;}
    void show(){cout << name << " (HourlyWorker)";}
      int pay(){return hour*money;}
};

class CommWorker : public Person
{
    private:
    int money;
    int extra;
public:
    CommWorker(string a): Person(a){}
    void input(){cin >> money >> extra;}
    void show(){cout << name << " (CommWorker)";}
    int pay(){return money*1000*12 + extra * 20;}

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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

