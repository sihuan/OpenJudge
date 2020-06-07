#include <iostream>
using namespace std;

class newInt {
private:
    int n_;

public:
    newInt()
        : n_(0)
    {
    }
    newInt(int a)
        : n_(a)
    {
    }
    friend newInt operator+(const newInt& x1, const newInt& x2)
    {
        newInt t;
        int x = 10;
        int a = x1.n_, b = x2.n_;
        while (a || b) {
            t.n_ += ((a % x + b % x) % 10) * (x / 10);
            x *= 10;
            a /= 10;
            b /= 10;
        }
        return t;
    }
    friend ostream& operator<<(ostream& out, newInt& t)
    {
        out << t.n_;
        return out;
    }
    friend istream& operator>>(istream& in, newInt& t)
    {
        in >> t.n_;
        return in;
    }
};
int main()
{
    int cases;
    newInt a, b, c;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>a>>b;
        c = a + b;
        cout<<a<<" + "<<b<<" = "<<c<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1829
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

