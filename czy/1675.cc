#include <bits/stdc++.h>

using namespace std;

class Fract
{
    int a,b;
public:
    int ys(int x,int y)
    {
        if(x%y==0) return y;
        else return ys(y,x%y);
    }
    Fract(int m,int n)
    {
        int mm=m,nn=n;
        if(mm<0) mm=-1*mm;
        if(nn<0) nn=-1*nn;
        int t=ys(mm,nn);
        m=m/t;
        n=n/t;
        if(n<0) {m=-1*m;n=-1*n;}
        a=m;
        b=n;
    }

    void show()
    {
        if(a==0) {cout<<"0"<<endl;return ;}
        cout<<a;
        if(b!=1){
            cout<<"/"<<b;
        }
        cout<<endl;
    }
};


#include <cstdio>
int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        Fract fr(n, m);
        fr.show();
    }
}

/**************************************************************
	Problem: 1675
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

