#include <stdio.h>

int gcd(int m,int n)
{
    int t;
    if (n>m){
        t=n;
        n=m;
        m=t;
    }
    if(m==n)
        return n;
    else
        return gcd(n,m-n);
}

int lcm(int m,int n,int g)
{
    int a=m/g;
    int b=n/g;
    return g*a*b;
}

int main()
{
    int a,b,g;
    scanf("%d %d",&a,&b);
    g = gcd(a,b);
    printf("%d %d",g,lcm(a,b,g));
}
/**************************************************************
	Problem: 1298
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:1136 kb
****************************************************************/

