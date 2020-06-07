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
        cout << "CREATE(): " << r << " " << i << endl;
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

    }
    cout << "=========================" << endl;
}

/**************************************************************
	Problem: 1831
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

