#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int a,x=0;
    scanf("%lld",&a);
    if(a==1)
        printf("no");
    else
    {
        for(long long int i=2;i<=a-1;i++)
    {
        if(a%i==0)
         x++;
    }
    if(x==0)
        printf("yes");
    else
        printf("no");
    }
return 0;
}

/**************************************************************
	Problem: 1379
	User: 202001061101
	Language: C
	Result: Accepted
	Time:1756 ms
	Memory:748 kb
****************************************************************/

