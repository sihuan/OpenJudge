#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <list>
#include <set>
#include <iomanip>
#include <stack>
#include <sstream>
#include <cstdio>

using namespace std;

class Grape {
    double v, w;
public:
    Grape (double p, double w=0):v(p), w(w) {}
    double weight () {return w;}
    void weight (double ww) {w = ww;}
    double value () {return v*w;}
};
#define const


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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

