#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class Grape
{
public:
    Grape(double p,double wei)
    {
        price = p;
        w = wei;
    }
   Grape(double p)
    {
        price = p;
    }
    double weight()const
    {
        return w;
    }
    void weight(double wei)
    {
        w = wei;
    }
    double value() const
    {
        return w*price;
    }

private:
    double w,price;
};

int main()
{
    double w, price;
    cin >> price;
    cin >> w;
    const Grape grap(price, w);
    Grape grape(price);
    cin >> w;
    grape.weight(w);
    cout << grape.weight() + grap.weight() << endl;
    cout << grape.value() + grap.value() << endl;
}

/**************************************************************
	Problem: 2308
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

