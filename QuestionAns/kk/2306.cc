#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Banana
{
public:
    Banana(double _weight)
    {
        w=_weight;
    }
    double weight()
    {
        return w;
    }
    Banana& operator -=(double an)
    {
        w-=an;
        return *this;
    }
private:
    double w;
};


int main()
{
    double weight, sale_weight;

    cin >> weight;
    Banana banana(weight);
    while(cin >> sale_weight)
        banana -= sale_weight;
    cout << banana.weight() << endl;
}

/**************************************************************
	Problem: 2306
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

