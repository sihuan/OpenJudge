#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
	double m,n;
	scanf("%lf %lf",&m,&n);
	if(m+n>2147483647)
	printf("overflow\n");
	else
	printf("sum is %.0lf",m+n);
}
/**************************************************************
	Problem: 1160
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

