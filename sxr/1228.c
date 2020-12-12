#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int c,d,e=1;
    c=(a>b?a:b);
    d=(a>b?b:a);
    if(d==0)
        return c;
    while(e!=0)
    {
        e=c%d;
        c=d;
        d=e;
    }
    return c;
}
int lcm(int a, int b)
{
    int c,d;
    c=gcd(a, b);
    d=(a*b)/c;
    return d;
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
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

