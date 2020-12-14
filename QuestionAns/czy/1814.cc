#include"bits/stdc++.h"
using namespace std;

vector<int> v;

class Base
{
private:
    int x;
public:
    Base(int q):x(q){cout<<"Base = "<<x<<" is created."<<endl;}
    Base(Base &q):x(q.x){cout<<"Base = "<<x<<" is copied."<<endl;}
    ~Base(){cout<<"Base = "<<x<<" is erased."<<endl;}
};

class Derived:public Base
{
private:
    int x2;
public:
    Derived(int q,int w):Base(q),x2(w){cout<<"Derived = "<<x2<<" is created."<<endl;}
    Derived(Derived &q):Base(q){ *this = q;cout<<"Derived = "<<x2<<" is copied."<<endl;}
    ~Derived(){cout<<"Derived = "<<x2<<" is erased."<<endl;}

};

int main()
{
    int cases, data1, data2;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>data1>>data2;
        Base base1(data1), base2(base1);

        Derived derived1(data1, data2), derived2(derived1);
    }
}
/**************************************************************
	Problem: 1814
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

