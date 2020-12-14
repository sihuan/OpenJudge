#include<iostream>
using namespace std;
void get_num(int &a,int &b,int &c)
{
    cin>>a>>b>>c;
}
void max_min(int &mmax,int &mmin,int a,int b,int c)
{
    mmax=a;
    if(mmax<b)
        mmax=b;
    if(mmax<c)
        mmax=c;
    mmin=a;
    if(b<mmin)
        mmin=b;
    if(c<mmin)
        mmin=c;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

