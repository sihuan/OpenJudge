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

inline int f(int x, int y, int z){
	return (x - y + z) * 2;
}
inline int f(int x, int y){
	return (x - y) * 2;
}
inline int f(int x){
	return 2 * (x - 1);
}


int main()
{
    int n, x, y, z;
    while(cin>>n)
    {
        if(n == 3)
        {
            cin>>x>>y>>z;
            cout<<f(x, y, z)<<endl;
        }
        if(n == 2)
        {
            cin>>x>>y;
            cout<<f(x, y)<<endl;
        }
        if(n == 1)
        {
            cin>>x;
            cout<<f(x)<<endl;
        }
        if(n == 0)
            break;
    }
}

/**************************************************************
	Problem: 1381
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

