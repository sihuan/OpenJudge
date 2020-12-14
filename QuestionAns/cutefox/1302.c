#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  double a,b,c,d;
  while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
      d=1.0/4*(sqrt)(a+b+c)*(sqrt)(a+b-c)*(sqrt)(a+c-b)*(sqrt)(b+c-a);
    printf("%.2lf\n",d);
    }

    return 0;
}

/**************************************************************
	Problem: 1302
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

