#include<stdio.h>

int RtSum();
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i = 1; i<=n; ++i)
		printf("Case %d: %d\n",i,RtSum());

	return 0;
}
int RtSum()
{
	int sum=0;
	int i;
	int n;
	scanf("%d",&n);
	for(i=0; i<n; ++i)
	{
	    int x;
	    scanf("%d",&x);
		if(x%2==0) sum += x;
		else sum += (x+1);
	}

	return sum;
}

/**************************************************************
	Problem: 1420
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

