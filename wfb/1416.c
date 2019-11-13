#include<stdio.h>

int main()
{
	int k;
	scanf("%d",&k);
	double a;
	double sum = 0;
	int i;
	for(i=0; i<k; ++i)
	{
		scanf("%lf",&a);
		sum += a;
	}
	printf("%.3lf\n",sum/k);
	
	return 0;
}
/**************************************************************
	Problem: 1416
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

