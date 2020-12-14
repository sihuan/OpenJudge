#include<stdio.h>

int main()
{
	int cnt = 0;
	double x;
	double sum=0;
	while(scanf("%lf",&x) != EOF)
	{
		++cnt;
		sum += x;
	}
	printf("%.3lf\n",sum/cnt);
	
	return 0;
}
/**************************************************************
	Problem: 1417
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

