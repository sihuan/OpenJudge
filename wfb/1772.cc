#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

class Equation {
private:
    double a_,b_,c_;
    double x1,x2;
public:
    Equation(double a, double b, double c){a_=a; b_=b; c_=c;}
    void solve(){
        double disc = sqrt(b_*b_-4*a_*c_);
        if(a_>0) {
            x1 = (-b_+disc)/(2*a_);
            x2 = (-b_-disc)/(2*a_);
        } else {
            x2 = (-b_+disc)/(2*a_);
            x1 = (-b_-disc)/(2*a_);
        }
    }
    void printRoot(){
        cout<<fixed<<setprecision(2)<<x1<<" "<<x2<<endl;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1280 kb
****************************************************************/

