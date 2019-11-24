#include<bits/stdc++.h>
using namespace std;
class Base
{
protected:
    int a;
public:
    Base(int _a):a(_a)
    {
        cout<<"Base = "<<a<<" is created."<<endl;
    }
    ~Base()
    {
        cout<<"Base = "<<a<<" is erased."<<endl;
    }
    Base(const Base &b)
    {
        a=b.a;
         cout<<"Base = "<<a<<" is copied."<<endl;
    }
};
class Derived:public Base
{
private:
    int b;
public:
    Derived(int _a,int _b):Base(_a),b(_b)
    {
        cout<<"Derived = "<<b<<" is created."<<endl;
    }
    Derived(const Derived &d):Base(d)
    {
        b=d.b;
        cout<<"Derived = "<<b<<" is copied."<<endl;
    }
    ~Derived()
    {
        cout<<"Derived = "<<b<<" is erased."<<endl;
    }
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

