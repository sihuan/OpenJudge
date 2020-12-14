#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<iomanip> 
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register 
#define LL long long 
#define pi 3.141
using namespace std;

class Apple{
	private:
		double weight, amount, price; 
	public:
		void input(){
			cin >> weight >> amount >> price;
		}
		double value(){
			return weight * amount * price;
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

