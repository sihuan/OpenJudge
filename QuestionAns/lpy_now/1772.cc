#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
 
class Equation
{
private:
    double a,b,c,x1,x2;
public:
    Equation(double _a,double _b ,double _c)
    {
        a = _a;
        b = _b;
        c = _c;
    }
    void solve()
    {
        double delt = b * b - 4 * a * c;
        if(delt == 0)
        {
            x1 = (-b + sqrt(delt)) /( 2 * a ); //注意括号
            x2 = x1;
        }
        else if(delt > 0)
        {
            x1 = (-b + sqrt(delt)) /( 2 * a );
            x2 = (-b - sqrt(delt)) /( 2 * a );
        }
        else
        {
            //没输出
            x1 = x2 = 0;
        }
    }
    void printRoot()
    {
        cout << setiosflags(ios::fixed);
        cout << setprecision(2) << x1 << " " << x2 << endl;
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

