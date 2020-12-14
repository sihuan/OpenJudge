#include <iostream>
#include <algorithm>
#include <iomanip>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;


class Mandarin {
    double wm;
public:
    Mandarin& weight(double w) {
        wm = w;
        return *this;
    }
    double getwm () {return wm;}
};
class MandarinBox  {
    double pm;
    Mandarin m[6];
public:
    MandarinBox (double p) : pm(p) {}
    Mandarin &operator [] (int n) {return m[n];}
    double value() {
        double sum = 0;
        for(int i = 0; i < 6; i++)
            sum += m[i].getwm() * pm;
        return sum;
    }
};


int main()
{
    double price, w;

    cin >> price;
    MandarinBox mandarin(price);
    for(int i = 0; i < 6; i++)
    {
        cin >> w;
        mandarin[i].weight(w);
    }
    cout << mandarin.value() << endl;
}

/**************************************************************
	Problem: 2310
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

