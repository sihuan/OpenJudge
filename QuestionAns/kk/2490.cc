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
    void im(int b)
    {
        m=b;
    }
    void print()
    {
        cout<<"("<<r<<","<<m<<")"<<endl;
    }
private:
    int r;
    int m;
};


int main()
{
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
	Problem: 2490
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

