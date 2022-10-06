#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

class A
{
public:
    A(int _a)
    {
        a=_a;
    }
    virtual void print()
    {
        cout<<"A : "<<a<<endl;
    }
protected:
    int a;
};
class A1:public  A
{
public:
    A1(int _a,int _b):A(_a)
    {
        b=_b;
    }
    void print()
    {
        cout<<"A1 : "<<a<<" "<<b<<endl;
    }
private:
    int b;
};
class A2:public  A
{
public:
    A2(int _a,int _b):A(_a)
    {
        b=_b;
    }
    void print()
    {
        cout<<"A2 : "<<a<<" "<<b<<endl;
    }
private:
    int b;
};
class A3:public  A
{
public:
    A3(int _a,int _b):A(_a)
    {
        b=_b;
    }
    void print()
    {
        cout<<"A2 : "<<a<<" "<<b<<endl;
    }
private:
    int b;
};


int main()
{
    int a, b, c, d, e, x, y, z;
    cin >> a >> b >> c >> d >> e;
    cin >> x >> y >> z;

    A *p[5];
    p[0] = new A(a);
    p[1] = new A1(b, x);
    p[2] = new A2(c, y);
    p[3] = new A3(d, z);
    p[4] = new A(e);

    for(int i = 0; i < 5; i++)
        p[i]->print();

    for(int i = 0; i < 5; i++)
        delete p[i];
}

/**************************************************************
	Problem: 2494
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

