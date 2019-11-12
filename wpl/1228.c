#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int m,c;
    if((a==0)&&(b!=0))
    {
        m=b;
    }
    else if((a!=0)&&(b==0))
    {
        m=a;
    }
    else if(a>b)
    {
        while(a%b!=0)
        {
            c=a%b;
            a=b;
            b=c;
        }
        m=b;
    }
    else
    {
        while(b%a!=0)
        {
            c=b%a;
            b=a;
            a=c;
        }
        m=a;
    }
    return m;
}
int lcm(int a, int b)
{
    int n,d,c;
    d=a*b;
    if((a==0)&&(b!=0))
    {
        n=a;
    }
    else if((a!=0)&&(b==0))
    {
        n=b;
    }
    else if(a>b)
    {
        while(a%b!=0)
        {
            c=a%b;
            a=b;
            b=c;
        }
        d=d/b;
        n=d;
    }
    else
    {
        while(b%a!=0)
        {
            c=b%a;
            b=a;
            a=c;
        }
        d=d/a;
        n=d;
    }
    return n;
}

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
/**************************************************************
	Problem: 1228
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

