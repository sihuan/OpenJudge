#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Complex
{
public:
    T r,i;
    Complex(T aa,T bb):r(aa),i(bb){}
    double getModulus()
    {
        double x=r*r+i*i;
        x=sqrt(x);
        return x;
    }

};

int main()
{
    int a, b;
    double c, d;
    cin>>a>>b;
    Complex<int> c1(a, b);
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<c1.getModulus()<<endl;
    cin>>c>>d;
    Complex<double> c2(c, d);
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<c2.getModulus()<<endl;
    return 0;
}
/**************************************************************
	Problem: 2217
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

