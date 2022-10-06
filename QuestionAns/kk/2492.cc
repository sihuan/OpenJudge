#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Cx
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
    int r;
    int m;
};


int main()
{
    int a, b;
    cin >> a >> b;
    Cx c, cc(a, b);
    c += cc;
    c.print();
}

/**************************************************************
	Problem: 2492
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

