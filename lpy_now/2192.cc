#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<vector>
#include<iomanip>
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register
#define LL long long
#define pi 3.141
#define INF 1400000000
using namespace std;

class Data{
	private:
		int a;
		double b;
		int flag;
	public:
		Data(){
			cout << "A default object is created.\n";
			flag = 0;
		}
		~Data(){
			if(flag == 0){
				cout << "The default object is erased.\n";
			}
			else if(flag == 1){
				cout << "The integer object " << a << " is erased.\n";
			}
			else{
				cout << "The double object " << b << " is erased.\n";
			}
		}
		Data(int i){
			flag = 1;
			a = i;
			cout << "An integer object " << a << " is created.\n";
		}
		Data(double i){
			flag = 2;
			b = i;
			cout << "A double object " << b << " is created.\n";
		}
};
int main()
{
    Data d1;
    int i;
    cin>>i;
    Data d2(i);
    double d;
    cin>>d;
    Data d3(d);
    return 0;
}
/**************************************************************
	Problem: 2192
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

