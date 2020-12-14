#include <bits/stdc++.h>

using namespace std;

class Employee
{
protected:
    string name;
public:
    Employee(string na):name(na){}
    virtual void print()=0;
};

class Sales : public Employee
{
    int m,e;
public:
    Sales(string n,int a,int b):Employee(n),m(a),e(b){}
    void print()
    {
        cout<<"Sales "<<name<<" : "<<(m+e)*12<<endl;
    }
};

class Manager : public Employee
{
    int m,e;
public:
    Manager(string n,int a,int b):Employee(n),m(a),e(b){}
    void print()
    {
        cout<<"Manager "<<name<<" : "<<m*12+e<<endl;
    }
};

class SalesManager : public Employee
{
    int m,e,x;
public:
    SalesManager(string n,int a,int b,int xx):Employee(n),m(a),e(b),x(xx){}
    void print()
    {
        cout<<"SalesManager "<<name<<" : "<<(m+e)*12+x<<endl;
    }
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

