#include <iostream>
#include <cstdio>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

class Integer;
class Fraction;

class Integer
{
public:
    Integer(int _n)
    {
        n=_n;
//        cout<<"Integer "<<n<<" construction."<<endl;
    }
    Integer(Integer &an)
    {
        n=an.n;
//        cout<<"Integer "<<n<<" duplicate."<<endl;
    }
    int value()
    {
        return n;
    }
    void pl(int _n)
    {
        n+=_n;
    }
    void mult(int _n)
    {
        n*=_n;
    }
    Fraction operator *(Fraction an);
    ~Integer()
    {
//        cout<<"Integer "<<n<<" destruction."<<endl;
    }
    int n;
};

class Fraction
{
public:
    Fraction(Integer& _n1,Integer& _n2):n1(_n1),n2(_n2)
    {
//       cout<<"Fraction "<<n1.value()<<"/"<<n2.value()<<" construction."<<endl;
    }
    Integer& numerator()
    {
        return n1;
    }
    Integer& denominator()
    {
        return n2;
    }
    double value()
    {
        return (double)n1.value()/(double)n2.value();
    }
    void print()
    {
        cout<<n1.value()<<"/"<<n2.value()<<endl;
    }
    Fraction& operator ++()
    {
        n1.pl(n2.value());
        return *this;
    }
    Fraction operator ++(int)
    {
        Fraction temp(*this);
        n1.pl(n2.value());
        return temp;
    }
    Fraction operator *(Fraction an)
    {
        Fraction temp(*this);
        temp.n1.mult(an.n1.value());
        temp.n2.mult(an.n2.value());
        return temp;
    }
    Fraction operator *(Integer an)
    {
        Fraction temp(*this);
        temp.n1.mult(an.value());
        return temp;
    }
    Fraction operator *(int n)
    {
        Fraction temp(*this);
        temp.n1.mult(n);
        return temp;
    }

    ~Fraction()
    {
//        cout<<"Fraction "<<n1.value()<<"/"<<n2.value()<<" destruction."<<endl;
    }

    Integer n1,n2;
};

Fraction Integer::operator*(Fraction an)
{
        an.n1.mult(n);
        return an;
}

Fraction operator *(int n, Fraction an )
{
        an.n1.mult(n);
        return an;
}

int main()
{
    int n, d, nn, dd;
    while(cin >> n >> d)
    {
        cin >> nn >> dd;
        Integer num(n), den(d), nnum(nn), dden(dd);
        Fraction f(num, den), ff(nnum, dden);
        f = ff * f;
        cout << f.numerator().value() << "/" << f.denominator().value() << "=" << f.value() << endl;
        f = ff * num;
        cout << f.numerator().value() << "/" << f.denominator().value() << "=" << f.value() << endl;
        f = num * ff;
        cout << f.numerator().value() << "/" << f.denominator().value() << "=" << f.value() << endl;
        f = ff * nn;
        cout << f.numerator().value() << "/" << f.denominator().value() << "=" << f.value() << endl;
        f = nn * ff;
        cout << f.numerator().value() << "/" << f.denominator().value() << "=" << f.value() << endl;
    }
}


/**************************************************************
	Problem: 2589
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

