#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>

using namespace std;

class Fract
{
public:
    Fract(int _n,int _m)
    {
        n=_n;
        m=_m;
    }
    void show()
    {
        int x,y;
        x=n;
        y=m;
        y=gcd(x,y);
        if(m*n<0)
            cout<<"-";
        m/=y;
        n/=y;
        if(m==1||n==0)
        {
            cout << abs(n) <<endl;
            return;
        }
        cout<<abs(n)<<"/"<<abs(m)<<endl;
    }
    operator double()
    {
        if(n==0)
            return 0;
        return (double)n/(double)m;
    }
private:
    int m;
    int n;
    int gcd(int m,int n)
    {
        if(m%n==0)
            return n;
        return gcd(n,m%n);
    }
};

int main()
{
    int n, m;
    while(cin >> n >> m)
    {
        Fract fr(n, m);
        cout << (double)fr << " ";
        fr.show();
    }
}

/**************************************************************
	Problem: 1676
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

