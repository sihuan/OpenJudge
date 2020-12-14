#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	if(n<0)
		for(i=n; i<=-1; ++i)
			printf("%d ",i);
	else if(n==0)
		printf("%d",n);
	else
		for(i=1; i<=n; ++i)
			printf("%d ",i);

	return 0;
}

/**************************************************************
	Problem: 1167
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

