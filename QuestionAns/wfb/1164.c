#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=1; i<=n; ++i)
	{
		for(j=n; j>i; --j)
			printf(" ");
		for(k=1; k<=2*i-1; ++k)
			printf("+");
		putchar('\n');
	}
	return 0;
}

/**************************************************************
	Problem: 1164
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

