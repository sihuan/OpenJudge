#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<cstdio>
#include<iomanip> 
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register 
#define LL long long 
#define pi 3.141
using namespace std;

class myClass{
	private:
		int i;
		double d;
	public:
		myClass(int ii = 0, double dd = 0){
			i = ii, d = dd;
			cout << "A new object of i=" << i << " and d=" << d << " is constructed." << "\n";
		}
		~myClass(){
			cout << "The object of i=" << i << " and d=" << d << " is deconstructed." << endl;
		}
};
int main()
{
    int a;
    double b;
    cin>>a>>b;
    myClass m1(a,b),m2;
    return 0;
}
/**************************************************************
	Problem: 1294
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

