#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

double pineapple (int a) {return a * 4.5;}
double pineapple(double w) {return 9.8 * w;}
double pineapple(double w, double p) {return w * p;}

int main()
{
    double weight, price;
    int amount;
    int cases = 3, type;
    while(cases--)
    {
        cin >> type;
        switch(type)
        {
        case 1 :
            cin >> amount;
            cout << pineapple(amount) << endl;
            break;
        case 2 :
            cin >> weight;
            cout << pineapple(weight) << endl;
            break;
        case 3 :
            cin >> weight >> price;
            cout << pineapple(weight, price) << endl;
            break;
        }
    }
}

/**************************************************************
	Problem: 2314
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

