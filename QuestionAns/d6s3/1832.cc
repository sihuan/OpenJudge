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
        cout << "CREATE(): " << r_ << " " << i_ << endl;
    }
    ~CPLX()
    {
        cout << "RELEASE(): " << r_ << " " << i_ << endl;
    }
    void print()
    {
        cout << "PRINT(): (" << r_ << ", " << i_ << "i)" << endl;
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
 
        CPLX cplx(a, b);
        cplx.print();
    }
    cout << "=========================" << endl;
}
/**************************************************************
	Problem: 1832
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

