#include <stdio.h>
#include <stdlib.h>

int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	if(c<=500)
	printf("%.2lf",a*b*c);
	else if(c>=501&&c<=1000)
	printf("%.2lf",a*b*500+a*0.95*b*(c-500));
	else if(c>=1001&&c<=2000)
	printf("%.2lf",a*b*500+a*0.95*b*500+a*0.9*b*(c-1000));
	else if(c>=2001)
	printf("%.2lf",a*b*500+a*0.95*b*500+a*0.9*b*1000+a*0.88*b*(c-2000));
	
    return 0;
}

/**************************************************************
	Problem: 2412
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

