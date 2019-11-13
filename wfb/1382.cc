#include <iostream>
#include <iomanip>

using namespace std;

int get_num(int &a,int &b, int &c)
{
    cin>>a>>b>>c;

    return 0;
}

int max_min(int &mmax,int &mmin,int a,int b,int c)
{
    mmax = mmin = a;
    if(b>mmax) mmax = b;
    if(c>mmax) mmax = c;
    if(b<mmin) mmin = b;
    if(c<mmin) mmin = c;

    return 0;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

