#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

double pineapple(int an)
{
    return an*4.5;
}
double pineapple(double we)
{
    return we*9.8;
}

double pineapple(double we,double pr)
{
    return we*pr;
}

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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

