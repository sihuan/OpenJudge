#include <iostream>
using namespace std;

class Base {
private:
    int n_;

public:
    Base(int n)
        : n_(n)
    {
        cout << "Base = " << n_ << " is created." << endl;
    }
    Base(const Base& b)
        : n_(b.n_)
    {
        cout << "Base = " << n_ << " is copied." << endl;
    }
    ~Base()
    {
        cout << "Base = " << n_ << " is erased." << endl;
    }
};

class Derived : public Base {
private:
    int d_;

public:
    Derived(int d1, int d2)
        : Base(d1)
        , d_(d2)
    {
        cout << "Derived = " << d_ << " is created." << endl;
    }
    Derived(const Derived& d)
        : Base(d)
        , d_(d.d_)
    {
        cout << "Derived = " << d_ << " is copied." << endl;
    }
    ~Derived()
    {
        cout << "Derived = " << d_ << " is erased." << endl;
    }
};
int main()
{
    int cases, data1, data2;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>data1>>data2;
        Base base1(data1), base2(base1);

        Derived derived1(data1, data2), derived2(derived1);
    }
}
/**************************************************************
	Problem: 1814
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

