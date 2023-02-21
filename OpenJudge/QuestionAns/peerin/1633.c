#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define MAX_SIZE 10009
int g(int k,int x)
{
    if(x==0 ) return 1;
    int t=1,d=1;
    int i,j;
    j=x;
    for(i=0;i<x;++i)
    {
        t=t*k;
        k=k-1;
        d=d*j;
        j=j-1;

    }
    return t/d;
}
int main()
{
   int n=0;
   while(~scanf("%d",&n))
   {
       int i,j,k;
       for(i=1;i<=n;++i)
       {
           int x=0;
           for(j=(n-i)*2;j>0;--j) printf(" ");
           for(k=0;k<i;++k)
           {
               printf("%4d",g(i-1,x));
               ++x;
           }
           printf("\n");
       }
       printf("\n");
   }
}

/**************************************************************
	Problem: 1633
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

