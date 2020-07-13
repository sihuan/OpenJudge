#include <iostream>
#include <vector>
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
    Fract() {}
    void show()
    {
        if (nume_ == 0 || deno_ == 1)
            cout << nume_ << endl;
        else
            cout << nume_ << "/" << deno_ << endl;
    }
    Fract& operator+=(const Fract& f)
    {
        int n = nume_ * f.deno_ + f.nume_ * deno_;
        int d = deno_ * f.deno_;
        int g = gcd(n, d);

        nume_ = n / g;
        deno_ = d / g;
        if (deno_ < 0) {
            nume_ = -nume_;
            deno_ = -deno_;
        }
        return *this;
    }
    friend istream& operator>>(istream& in, Fract& f)
    {
        in >> f.nume_ >> f.deno_;
        return in;
    }
};

template <typename T>
class Array {
private:
    int count_, size_;
    vector<T> data_;

public:
    Array(int n)
        : size_(n)
        , count_(0)
    {
    }
    void input(int n)
    {
        T t;
        for (int i = 0; i < n && count_ < size_; i++, count_++) {
            cin >> t;
            data_.push_back(t);
        }
    }
    T operator[](int i)
    {
        return data_[i];
    }
};


int main()
{
    int  n;
    cin >> n;
    Array<double> db(1000);
    db.input(n);
    double dbsum(0.0);
    for(int i = 0; i < n; i++)
        dbsum += db[i];
    cout << dbsum << endl;

    cin >> n;
    Array<Fract> fr(1000);
    fr.input(n);
    Fract frsum(0, 1);
    for(int i = 0; i < n; i++)
        frsum += fr[i];
    frsum.show();
}

/**************************************************************
	Problem: 1680
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1276 kb
****************************************************************/

