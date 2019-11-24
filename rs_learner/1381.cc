#include<iostream>
using namespace std;
int f(int x,int y,int z)
{
    return(2*(x-y+z));
}
int f(int x,int y)
{
    return(2*(x-y));
}
int f(int x)
{
    return(2*(x-1));
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

