#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Pear {
    double w;
public:
    Pear (double d=0):w(d) {cout << w << "kg pear is created." << endl;}
    Pear (Pear& p):w(p.w) {cout << w << "kg pear is copied." << endl;}
    double weight () {return w;}
    void weight (double ww) {w = ww;}
    ~Pear () {cout << w << "kg pear is erased." << endl;}
};



int main()
{
    double w;
    cin >> w;
    Pear pe(w), pea, pear(pe);
    cin >> w;
    pear.weight(w);
    cout << pear.weight() << endl;
}

/**************************************************************
	Problem: 2313
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

