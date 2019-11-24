#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Equation
{
    private:
        double a;
        double b;
        double c;
        double root1;
        double root2;
    public:
        Equation(double m,double n,double l):a(m),b(n),c(l){}
        void solve()
        {
            root1=(-b+sqrt(b*b-4*a*c))/(2*a);
            root2=(-b-sqrt(b*b-4*a*c))/(2*a);
        }
        void printRoot()
        {
            if(root1>=root2)
            cout<<fixed<<setprecision(2)<<root1<<" "<<root2<<endl;
            if(root2>root1)
            cout<<fixed<<setprecision(2)<<root2<<" "<<root1<<endl;
        }
        ~Equation(){}
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

