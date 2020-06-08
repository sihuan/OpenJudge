#include<iostream>
using namespace std;
class Apple{
public:
    void input(void){
    cin>>price>>weight>>amount;
    }
    double value(void){
    return price*weight*amount;
    }
private:
    int amount;
    double price,weight;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

