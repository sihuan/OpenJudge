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
#define pi 3.14
using namespace std;

inline void get_num(int &a, int &b, int & c){
	scanf("%d%d%d", &a, &b, &c);
}
inline void max_min(int &mmax, int &mmin, int a, int b, int c){
	int number;
	number = a > b ? a : b;
	mmax = number > c ? number : c;
	number = a < b ? a : b;
	mmin = number < c ? number : c;
}
int main()
{
    int cases;
    int mmax, mmin, a, b, c;

    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        get_num(a, b, c);
        max_min(mmax, mmin, a, b, c);
        cout<<"case "<<i<<" : "<<mmax<<", "<<mmin<<endl;
    }
}
/**************************************************************
	Problem: 1382
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

