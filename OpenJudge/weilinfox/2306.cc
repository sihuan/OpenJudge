#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

class Banana {
    double w;
public:
    Banana(double a):w(a) {}
    double weight () {return w;}
    void operator-= (double a) {
        w -= a;
    }
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

