#include<iostream>
#include<iomanip>
using namespace std;
int gcd(int a,int b)
{
        return b==0?a:gcd(b,a%b);
}
class Fract
{
private:
    int x,y;
public:
    Fract(int a=0,int b=0):x(a),y(b)
    {
        int flager=1;
        if(y<0)
        {
            y=-y;
            x=-x;
        }
        if(x<0)
        {
            flager=-1;
            x=-x;
        }
        int flag=gcd(max(x,y),min(x,y));
        x/=flag;
        y/=flag;
        if(flager==-1)
            x=-x;
    }
    void show()
    {
        if(x==0||y==1)
            cout<<x<<endl;
        else
            cout<<x<<'/'<<y<<endl;
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

