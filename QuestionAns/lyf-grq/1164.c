#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf(" ");
		for(int k=1;k<=2*i-1;k++)
		printf("+");
		printf("\n");
	}
}
/**************************************************************
	Problem: 1164
	User: 202001061101
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

