#include "bits/stdc++.h"
using namespace std;

int swp(int &a,int &b ,int &c)
{
    int aa[3];
    aa[0]=b,aa[1]=c,aa[2]=a;
     a=aa[0],b=aa[1],c=aa[2];
}

int swp(int &a,int &b ,int &c,int k)
{
    int aa[3];
    aa[k%3]=a,aa[(k+1)%3]=b,aa[(k+2)%3]=c;
     a=aa[0],b=aa[1],c=aa[2];
}


int main()
{
    int a, b, c, k;
    cin >> a >> b >> c;
    while(cin >> k)
    {
        if(k == 0)
            swp(a, b, c);
        else
            swp(a, b, c, k);
        cout << a << " " << b << " " << c << " " << endl;
    }
}

/**************************************************************
	Problem: 2107
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

