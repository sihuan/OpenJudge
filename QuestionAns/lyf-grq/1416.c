#include <stdio.h>
#include <stdlib.h>

int main()
{
   double k,a,i;
   double sum=0;
   scanf("%lf",&k);
   for(i=0;i<k;i++)
   {
       scanf("%lf",&a);
       sum+=a;
   }
   printf("%.3lf",sum/k);
}

/**************************************************************
	Problem: 1416
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

