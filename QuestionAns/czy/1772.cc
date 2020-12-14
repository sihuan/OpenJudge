#include<iostream>
#include<iomanip>
#include<cmath>
#include<math.h>
#include<cstring>
#include<ctype.h>
using namespace std;
class Equation
{
private:
    double a,b,c;
    double x1,x2;
public:
    Equation(double aa,double bb,double cc)
    {
        a=aa,b=bb,c=cc;
    }
    void solve()
    {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    }
     void printRoot()
     {
         cout<<setprecision(2)<<fixed<<x1<<" "<<x2<<endl;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

