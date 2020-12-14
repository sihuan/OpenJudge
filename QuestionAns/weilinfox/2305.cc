#include <iostream>
#include <iomanip>
using namespace std;

class Apple {
        double p, w, a;
public:
        void input () {
                cin >> p >> w >> a;
        }
        double value () {
                return p * w * a;
        }
};



int main()
{
    int i, cases;
    Apple apple;

    cin >> cases;
    for(i = 1; i <= cases; i++)
    {
        apple.input();
        cout << apple.value() << endl;
    }
}

/**************************************************************
	Problem: 2305
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

