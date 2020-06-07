#include <iostream>
using namespace std;

void get_num(int &a, int &b, int &c)
{
    cin >> a >> b >> c;
}

int mm(int n1, int n2, int m)
{
    if (m==1) {
        if (n1 > n2)
            return n1;
        return n2;
    }
    else {
        if (n1>n2)
            return n2;
        return n1;
    }
}

void max_min(int &mmax, int &mmin, int a,int b,int c)
{
    mmax = mm(mm(a,b,1),c,1);
    mmin = mm(mm(a,b,2),c,2);
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

