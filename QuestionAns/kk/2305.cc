#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Apple
{
public:
    Apple(){}
    void input()
    {
        cin>>price>>weight>>amount;
    }
    double value()
    {
        return price*weight*amount;
    }
private:
    double price,weight,amount;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

