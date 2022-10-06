#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Rl
{
public:
    Rl(int a=0)
    {
        r=a;
    }
    void print()
    {
        cout<<r<<endl;
    }
protected:
    int r;
};

class Cx:public Rl
{
public:
    Cx(int a=0,int b=0)
    {
        r=a;
        m=b;
    }
    void re(int a)
    {
        r=a;
    }
    int re() const
    {
        return r;
    }
    void im(int b)
    {
        m=b;
    }
    int im() const
    {
        return m;
    }
    void print() const
    {
        cout<<"("<<r<<","<<m<<")"<<endl;
    }
    Cx operator +=(Cx &an)
    {
        r+=an.r;
        m+=an.m;
        return *this;
    }
private:
    int m;
};


int main()
{
    int r, i;
    cin >> r >> i;
    Rl rl(r);
    Cx cx(r, i);
    rl.print();
    cx.print();
}

/**************************************************************
	Problem: 2493
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

