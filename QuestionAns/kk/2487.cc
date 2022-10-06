#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <iomanip>

using namespace std;

void get_num(int &a,int &b)
{
    cin>>a>>b;
}

void put_sum(int a,int b)
{
    cout<<a+b;
}


int main()
{
    int a, b;
    get_num(a, b);
    put_sum(a, b);
}

/**************************************************************
	Problem: 2487
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

