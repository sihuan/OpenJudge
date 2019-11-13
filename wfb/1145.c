#include<stdio.h>

int RtSum();
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i = 1; i<=n; ++i)
		printf("case %d:sum=%d.\n",i,RtSum());

	return 0;
}
int RtSum()
{
	int sum=0;
	int a,b;
	scanf("%d%d",&a,&b);
	int i;
	for(i=a; i<=b; ++i)
		sum += i;

	return sum;
}

/**************************************************************
	Problem: 1145
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

