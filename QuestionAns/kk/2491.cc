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
private:
    int r;
    int m;
};


int main()
{
    const Cx cx;
    cout << cx.re() << " " << cx.im() << endl;
    cx.print();
    cout << "====================" << endl;
    Cx c;
    c.print();
    c.im(1);
    c.print();
    c.re(2);
    c.print();
    cout << "====================" << endl;
    int a, b;
    cin >> a >> b;
    Cx cc(a, b);
    cc.print();
}

/**************************************************************
	Problem: 2491
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

