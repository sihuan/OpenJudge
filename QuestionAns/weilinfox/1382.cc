#include <iostream>
using namespace std;

void get_num(int& a, int& b, int& c)
{
        cin >> a >> b >> c;
}

void max_min(int& mmax, int& mmin, int& a, int& b, int& c)
{
        mmin = mmax = a;
        if (b > mmax) mmax = b;
        if (b < mmin) mmin = b;
        if (c > mmax) mmax = c;
        if (c < mmin) mmin = c;
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

