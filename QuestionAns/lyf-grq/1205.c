#include <stdio.h>
#include <stdlib.h>
int main()
{
   double a,b,x,y=0;
   while(scanf("%lf %lf",&a,&b)!=EOF)
   {
       x=a*b;
       y+=x;
   }
   printf("%.2lf",y);

}


/**************************************************************
	Problem: 1205
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

