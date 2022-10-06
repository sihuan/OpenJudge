#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Grape
{
public:
    Grape(double pr=0,double we=0)
    {
        price=pr;
        weigh=we;
    }
    void weight(double we)
    {
        weigh=we;
    }
    double weight() const
    {
        return weigh;
    }
    double value() const
    {
        return weigh*price;
    }
private:
    double price,weigh;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

