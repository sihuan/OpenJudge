#include <iostream>
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

using namespace std;

int f(int x=0,int y=1,int z=0)
{
    return 2*(x-y+z);
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

