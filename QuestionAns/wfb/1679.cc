#include <iostream>

using namespace std;

class Person{
public:
    Person(string n) : name_(n){}
    virtual void input(){}
    virtual void show() const = 0;
    virtual int pay() const = 0;
protected:
    string name_;
};
class Manager:virtual public Person{
public:
    Manager(string n) : Person(n){}
    void input() {cin>>base_;}
    void show() const {cout<<name_<<" (Manager)";}
    int pay() const {return base_*1000;}
private:
    int base_;
};
class Employee:virtual public Person{
public:
    Employee(string n) : Person(n){}
    void input() {cin>>base_>>e_;}
    void show() const {cout<<name_<<" (Employee)";}
    int pay() const {return base_*(12+e_)*1000;}
private:
    int base_;
    int e_;
};
class HourlyWorker:virtual public Person{
public:
    HourlyWorker(string n) : Person(n) {}
    void input() {cin>>base_>>h_;}
    void show() const {cout<<name_<<" (HourlyWorker)";}
    int pay() const {return base_*h_;}
private:
    int base_;
    int h_;
};
class CommWorker:virtual public Person{
public:
    CommWorker(string n) : Person(n) {}
    void input() {cin>>base_>>e_;}
    void show() const {cout<<name_<<" (CommWorker)";}
    int pay() const {return (base_*12 )*1000+e_*20;}
private:
    int base_;
    int e_;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

