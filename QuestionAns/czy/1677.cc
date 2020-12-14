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
    friend Fract operator *(Fract &x,Fract &y)
        {
           int aa=x.a*y.a;
           int bb=x.b*y.b;
           Fract temp(aa,bb);
           return temp;
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


int main()
{
    int n, m, p, q;
    while(cin >> n >> m >> q >> p)
    {
        Fract f1(n, m), f2(q, p);
        Fract fr = f1 * f2;
        fr.show();
    }
}
/**************************************************************
	Problem: 1677
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

