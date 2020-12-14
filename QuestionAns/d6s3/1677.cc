#include <iostream>
using namespace std;

class Fract {
private:
    int nume_, deno_;
    int gcd(int a, int b)
    {
        while (b) {
            int t = a % b;
            a = b;
            b = t;
        }
        return a;
    }

public:
    Fract(int n, int d)
        : nume_(n)
        , deno_(d)
    {
        int t = gcd(nume_, deno_);
        nume_ /= t;
        deno_ /= t;
        if (deno_ < 0) {
            deno_ = -deno_;
            nume_ = -nume_;
        }
    }
    void show()
    {
        if (nume_ == 0 || deno_ == 1)
            cout << nume_ << endl;
        else
            cout << nume_ << "/" << deno_ << endl;
    }
    Fract operator*(const Fract& f)
    {
        int n = nume_ * f.nume_;
        int d = deno_ * f.deno_;
        int g = gcd(n, d);
        return Fract(n / g, d / g);
    }
};


int main()
{
    int n, m, p, q;
    while(cin >> n >> m >> q >> p)
    {
        Fract f1(n, m), f2(q, p);
        Fract fr = f1 * f2;
        fr.show();
    }
}
/**************************************************************
	Problem: 1677
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

