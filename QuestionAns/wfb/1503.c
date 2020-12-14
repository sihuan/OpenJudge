#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define SWAP(a,b,t) t=a; a=b; b=t;
int gcd(int a,int b)
{
    int temp;
    while(b)
    {
        a%=b;
        SWAP(a,b,temp);
    }
    return a;
}
void Print(int a,int b)
{
    int x = 0;
    int g;
    if(a>=b)
    {
        x = a/b;
        a -= x*b;
    }
    g = gcd(a,b);
    if(a)
    {
       a = a/g;
        b = b/g;
    }
    if(x && a) printf("%d+%d/%d\n",x,a,b);
    else if(x && !a) printf("%d\n",x);
    else if(!x && a)printf("%d/%d\n",a,b);
    else printf("0\n");
}
int main()
{
    int a,b;
    while(scanf("%d/%d",&a,&b) != EOF)
        Print(a,b);
    return 0;
}

/**************************************************************
	Problem: 1503
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

