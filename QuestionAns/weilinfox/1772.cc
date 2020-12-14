#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
  
class Equation {
        double a, b, c;
        double x1, x2;
public:
        Equation (double d, double e, double f):a(d),b(e),c(f) {};
        void solve () {
                x1 = (- b + sqrt(b * b - 4 * a * c)) / a / 2;
                x2 = (- b - sqrt(b * b - 4 * a * c)) / a / 2;
        }
        void printRoot() {
                cout << fixed << setprecision(2) << max(x1, x2) << " ";
                cout << fixed << setprecision(2) << min(x1, x2) << endl; 
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

