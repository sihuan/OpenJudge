#include<iostream>
#include<cmath>
#include<cstdlib>
 
using namespace std;
 
class Fract
{
    int n,m;
    char c;
public:
    Fract(int a,int b)
    {
        n = a;
        m = b;
        if(a*b<0) c = '-';
        else c = '+';
        while(a != 0)
        {
            int t = b%a;
            b = a;
            a = t;
        }
        n = abs(n/b);
        m = abs(m/b);
    }
    Fract(int a,int b,char o)
    {
        n = a;
        m = b;
        c = o;
        if(n == 0) c = '+';
        while(a != 0)
        {
            int t = b%a;
            b = a;
            a = t;
        }
        n = n/b;
        m = m/b;
    }
    void show()
    {
        if(c == '-') cout << c;
        if(n == 0||m == 1)
        {
            cout << n << endl;
        }
        else
        {
            cout << n << '/' << m << endl;
        } 
    }
    Fract friend operator*(Fract a,Fract b)
    {
        int x = a.n*b.n;
        int y = a.m*b.m;
        if(a.c == b.c) return Fract(x,y,'+');
        else return Fract(x,y,'-');
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

