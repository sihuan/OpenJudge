#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n,i,a,b,max,min;
   scanf("%d",&n);
   scanf(" %d",&a);
   max=a;
   min=a;
   for(i=2;i<=n;i++)
   {
       scanf(" %d",&b);
       if(b>max)
        max=b;
       else
        max=max;
       if(b<min)
        min=b;
       else
        min=min;
   }
   printf("The maximum number is %d.\n",max);
   printf("The minimum number is %d.\n",min);
}


/**************************************************************
	Problem: 1024
	User: 202001061101
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

