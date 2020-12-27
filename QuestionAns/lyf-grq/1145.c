#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,i,a,b,sum;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       sum=0;
       scanf("%d %d",&a,&b);
       sum=(a+b)*(b-a+1)/2;
       printf("case %d:sum=%d.\n",i,sum);
   }

}


/**************************************************************
	Problem: 1145
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

