#include <iostream>
#include <cstdio>
using namespace std;
//辗转相除法
int measure(int x, int y)
{
    int z = y;
    while(x%y!=0)
    {
        z = x%y;
        x = y;
        y = z;
    }
    return z;
}
int abs(int x){
    if(x>=0)
        x=x;
    else
        x=-x;
    return x;
}
class Fract
{
public:
    Fract(int n,int m)
    {
        int e=measure(n,m);
        n = n/e;
        m = m/e;
        a = n;
        b = m;
    }
    void show()
    {
        if(a==0)
            printf("0\n");
        else if(b==1&&a>0)
            printf("%d\n",abs(a));
        else if(b==1&&a<0)
            cout<<"-"<<abs(a)<<endl;
        else if(a*b>0)
            printf("%d/%d\n",abs(a),abs(b));
        else
            printf("-%d/%d\n",abs(a),abs(b));

    }
private:
    int a,b;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

