#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if(a%2==0)
    {
        a=a;
    }
    else
    {
        a=a+1;
    }
    if(b%2==0)
    {
        b=b;
    }
    else
    {
        b=b+1;
    }
    if(c%2==0)
    {
        c=c;
    }
    else
    {
        c=c+1;
    }
    d=a+b+c;
    printf("%d",d);
    return 0;
}

/**************************************************************
	Problem: 1402
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

