#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

class Equation {
private:
    double a_, b_, c_, x1_, x2_;

public:
    Equation(double a, double b, double c)
        : a_(a)
        , b_(b)
        , c_(c)
    {
    }
    void solve()
    {
        double delta = sqrt(b_ * b_ - 4 * a_ * c_);
        x1_ = (-b_ + delta) / (2 * a_);
        x2_ = (-b_ - delta) / (2 * a_);
        if (x2_ > x1_)
            swap(x1_, x2_);
    }
    void printRoot()
    {
        cout << fixed << setprecision(2);
        cout << x1_ << " " << x2_ << endl;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

