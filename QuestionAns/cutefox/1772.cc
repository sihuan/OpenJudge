#include<iostream>
#include<cmath>
#include <iomanip>

using namespace std;
class Equation
{
public:
        Equation(double d,double e,double f)
    {
        a=d;
        b=e;
        c=f;
    }
    void solve()
    {
        r1=(-b+sqrt(b*b-4*a*c))/(2*a);
        r2=(-b-sqrt(b*b-4*a*c))/(2*a);
    }
    void printRoot()
    {
     cout<<setiosflags(ios::fixed)<<setprecision(2)<<r1<<" "<<r2<<endl;
    }

private:
    double a,b,c,r1,r2;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

