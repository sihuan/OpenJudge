#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

template<typename T>
class Complex{
public:
    Complex(const T& r,const T& i) : r_(r),i_(i){}
    double getModulus() const {return sqrt(r_*r_+i_*i_);}
private:
    T r_,i_;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

