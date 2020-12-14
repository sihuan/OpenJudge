#include <iostream>
using namespace std;

class CPLX {
private:
    double r_, i_;

public:
    CPLX(double r, double i)
        : r_(r)
        , i_(i)
    {
    }
    double getreal()
    {
        return r_;
    }
    double getimage()
    {
        return i_;
    }
    void setreal(double r)
    {
        r_ = r;
    }
    void setimage(double i)
    {
        i_ = i;
    }
};
int main()
{
    int cases;
    cin >> cases;
    for(int i = 1; i <= cases; ++i)
    {
        double a, b;
        cin >> a >> b;
        cout << "=========================" << endl;

        CPLX cplx(0,0);
        cplx.setreal(a);
        cplx.setimage(b);
        cout << "Complex real part is " << cplx.getreal() <<", imaginary part is " << cplx.getimage() << "." << endl;
    }
    cout << "=========================" << endl;
}

/**************************************************************
	Problem: 1833
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

