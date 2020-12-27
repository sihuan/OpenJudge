#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
	int n;
	int i,j,k;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=1;i<=(n+1)/2;i++)
		{
			for(j=1;j<=(n+1)/2-i;j++)
			printf(" ");
			printf("*");
			for(k=1;k<=2*i-3;k++)
			printf(" ");
			if(i!=1)
			printf("*");
			printf("\n");
		}
		for(i=(n+3)/2;i<=n;i++)
		{
			for(j=1;j<=i-(n+1)/2;j++)
			printf(" ");
			printf("*");
			for(k=1;k<=2*(n-i)-1;k++)
			printf(" ");
			if(i!=n)
			printf("*");
			printf("\n"); 
		}	
		printf("\n");
	}
}
/**************************************************************
	Problem: 1170
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

