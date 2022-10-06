#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cstdio>
using namespace std;

class Equation
{
private:
    double x1,x2;
    double a,b,c;
public:
    Equation(double _a,double _b,double _c)
    {
        a=_a;
        b=_b;
        c=_c;
    }
    void solve()
    {
        x1=(-1*b+sqrt(b*b-4*a*c))/(a*2);
        x2=(-1*b-sqrt(b*b-4*a*c))/(a*2);
    }
    void printRoot()
    {
        printf("%.2lf %.2lf\n",x1,x2);
    }
};
int main()
{
    double a, b, c;
    while (cin>>a>>b>>c)
    {
        Equation equ(a,b,c);
        equ.solve();
        equ.printRoot();
    }
    return 0;
}
/**************************************************************
	Problem: 1772
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

