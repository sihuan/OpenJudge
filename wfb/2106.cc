//#include <fstream>
#include <cstring>
#include <algorithm>
#include <iostream>

using namespace std;

//ifstream cin("input.txt");
//ofstream cout("output.txt");

class Employee{
public:
    Employee(string n,int b) : name(n),base(b){}
    virtual void print() const = 0;
    virtual ~Employee(){}
protected:
    string name;
    int base;
};
class Manager : public Employee{
public:
    Manager(string n,int b,int bo) : Employee(n,b),bonus(bo){}
    void print() const {
        int total = base*12 + bonus;
        cout<<"Manager "<<name<<" : "<<total<<endl;
    }
private:
    int bonus;
};
class Sales : public Employee{
public:
    Sales(string n,int b,int r) : Employee(n,b),royalty(r) {}
    void print() const {
        int total = (base + royalty)*12;
        cout<<"Sales "<<name<<" : "<<total<<endl;
    }
private:
    int royalty;
};
class SalesManager : public Employee{
public:
    SalesManager(string n,int b,int r,int bo) : Employee(n,b),royalty(r),bonus(bo){}
    void print() const {
        int total = (base+royalty)*12 + bonus;
        cout<<"SalesManager "<<name<<" : "<<total<<endl;
    }
private:
    int bonus;
    int royalty;
};
int main()
{
    string label, name;
    Employee* p[100];
    int n;
    int base, royalty, bonus;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> label >> name;
        if(label == "Sales")
        {
            cin >> base >> royalty;
            p[i] = new Sales(name, base, royalty);
        }
        if(label == "Manager")
        {
            cin >> base >> bonus;
            p[i] = new Manager(name, base, bonus);
        }
        if(label == "SalesManager")
        {
            cin >> base >> royalty >> bonus;
            p[i] = new SalesManager(name, base, royalty, bonus);
        }
    }
    for(int i = 0; i < n; i++)
        p[i]->print();
    for(int i = 0; i < n; i++)
        delete p[i];
}

/**************************************************************
	Problem: 2106
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

