#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double func(double x)
{
    double y;
if(x<0)
   y= x*-1;
else if(x<1)
  y=sin(x*2);
else if(x<5)
   y=sqrt(x*x*x+x);
else
   y=2*x+10;
   return y;
 }

int output(int n, double x)
{
printf("case %d:y=%g.\n",n,x);
return 0;
}



int main()
{
    int i, cases;
    double x;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%lf", &x);
        output(i, func(x));
    }
    return 0;
}
/**************************************************************
	Problem: 1146
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

