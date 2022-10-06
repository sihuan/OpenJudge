#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

unsigned long long int gcd(unsigned long long int m,unsigned long long int n)
{
    if(m%n==0)
        return n;
    return gcd(m,m%n);
}
unsigned long long int find(unsigned long long int x,unsigned long long int y)
{
    unsigned long long int n,m,flag=0;
    if(x>y)
    {
        m=y;
        n=x;
    }

    else
    {
        m=x;
        n=y;
    }

    flag=gcd(n,m);
    return x*y/flag;
}
int main()
{
    unsigned long long int x,y,n,t;
    scanf("%llu%llu%llu",&x,&y,&n);
    t=n/x+n/y-n/find(x,y);
    printf("%llu",t);
}
/**************************************************************
	Problem: 2547
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

