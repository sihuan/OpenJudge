#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,i,x,j,a,sum;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&x);
       sum=0;
       for(j=1;j<=x;j++)
       {
           scanf(" %d",&a);
           sum+=a;
       }
   printf("%d\n\n",sum);
   }
}


/**************************************************************
	Problem: 1045
	User: 202001061101
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

