#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>

using namespace std;

class Cherry {
    double w;
public:
    Cherry (double w, double a):w(w*a) {}
    Cherry () {}
    double weight() {return  w;}
    void weight(double a) {w = a;}
    void sold_weight(double a) {w -= a;}
};


int main()
{
    double weight, amount;
    cin >> weight >> amount;

    Cherry cherry(weight, amount);
    Cherry sold_cherry[100];

    int cases;
    cin >> cases;
    for(int i = 0; i < cases; i++)
    {
        double w;
        cin >> w;
        sold_cherry[i].weight(w);
        cherry.sold_weight(w);
    }
    cout << cherry.weight() << endl;
}

/**************************************************************
	Problem: 2307
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

