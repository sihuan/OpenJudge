#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Cx
{
public:
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
        cout<<"("<<r<<","<<m<<")";
    }
private:
    int r;
    int m;
};




int main()
{
    Cx cc;
    int a, b;
    cin >> a >> b;
    cc.re(a);
    cc.im(b);
    cc.print();
}

/**************************************************************
	Problem: 2489
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

