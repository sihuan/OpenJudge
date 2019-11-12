#include <stdio.h>
#include <stdlib.h>

int main()
{
double a,b,c;
double d,e;
scanf("%lf%lf%lf",&a,&b,&c);
scanf("%lf",&d);
scanf("%lf",&e);
printf("%.2lf %.2lf %.2lf\n%.2lf %.2lf %.2lf\n",d/100*a,d/100*b,d/100*c,e*100/a,e*100/b,e*100/c);
return 0;
}


/**************************************************************
	Problem: 1005
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

