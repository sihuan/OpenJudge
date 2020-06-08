#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,i,m,b;
    scanf("%ld",&n);
    long int a[500001]={0};
    for(i=0; i<n; i++)
    {
        scanf("%ld",&b);
        a[b]=a[b]+1;
    }
    m=a[1];
    for(i=0;i<500001;i++)
    {
     if(a[i] > m)
        m=a[i];
        }
     printf("%ld",m);
    return 0;
}

/**************************************************************
	Problem: 1469
	User: 201901060203
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:2628 kb
****************************************************************/

