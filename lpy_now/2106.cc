#include <bits/stdc++.h>
using namespace std;
 
//多态，&引用，*指针，virtual虚函数
 
class Employee
{
protected :
    string name;
    int base;
public :
    Employee(string n,int b):name(n),base(b){}
    virtual void print() = 0;
};
 
class Manager :public Employee
{
private :
    int bonus ;
public :
    Manager(string n,int b,int k):Employee(n,b),bonus(k){}
    void print()
     {
         bonus = base*12+bonus;
         cout<<"Manager "<<name<<" : "<<bonus<<endl;
     }
};
 
class Sales :public Employee
{
private :
    int royalty;
public :
    Sales(string n,int b,int k):Employee(n,b),royalty(k){}
    void print()
     {
         royalty = (royalty+base)*12;
         cout<<"Sales "<<name<<" : "<<royalty<<endl;
     }
};
 
class SalesManager :public Employee//多重继承慎用！
{
private :
    int bonus,royalty;
public :
    SalesManager(string n,int b,int k,int kk):Employee(n,b),royalty(k),bonus(kk){}
    void print()
    {
        int sum = 12*(base+royalty)+bonus;
        cout<<"SalesManager "<<name<<" : "<<sum<<endl;
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

