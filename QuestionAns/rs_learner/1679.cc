#include<bits/stdc++.h>
using namespace std;
class Person
{
protected:
    string name;
public:
    Person(string _name):name(_name){}
    virtual ~Person(){}
    virtual void show(){}
    virtual void input(){}
    virtual int pay(){}
};
class Manager:public Person
{
private:
    double s;
public:
    Manager(string _name):Person(_name){}
    ~Manager(){}
    void input()
    {
        int b;
        cin>>b;
        s=1000*b;
    }
    int pay()
    {
        return s;
    }
    void show(){cout<<name<<" (Manager)";}
};
class Employee:public Person
{
private:
    double s;
public:
    Employee(string _name):Person(_name){}
    ~Employee(){}
    void input()
    {
        int b,k;
        cin>>b>>k;
        s=1000*b*12+k*b*1000;
    }
    int pay()
    {
        return s;
    }
    void show(){cout<<name<<" (Employee)";}
};
class HourlyWorker:public Person
{
private:
    double s;
public:
    HourlyWorker(string _name):Person(_name){}
    ~HourlyWorker(){}
    void input()
    {
        int b,k;
        cin>>b>>k;
        s=b*k;
    }
    int pay()
    {
        return s;
    }
    void show(){cout<<name<<" (HourlyWorker)";}
};
class CommWorker:public Person
{
private:
    double s;
public:
    CommWorker(string _name):Person(_name){}
    ~CommWorker(){}
    void input()
    {
        int b,k;
        cin>>b>>k;
        s=b*12*1000+k*0.02*1000;
    }
    int pay()
    {
        return s;
    }
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

