#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
   double d,s,v;
   const double pi = acos(-1.0);
   scanf("%lf",&d);
   v=(1+0.0)/6*pi*d*d*d;
   s=pi*d*d;
   printf("area = %f\n",s);
   printf("volume = %f\n",v);
}

/**************************************************************
	Problem: 1401
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

