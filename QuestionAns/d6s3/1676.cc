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
    operator double()
    {
        double t = (double)nume_ / deno_;
        return t;
    }
};


int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        Fract fr(n, m);
        cout << (double)fr << " ";
        fr.show();
    }
}

/**************************************************************
	Problem: 1676
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

