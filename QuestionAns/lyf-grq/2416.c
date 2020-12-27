#include <stdio.h>
#include <stdlib.h>
int print(int m, int n)
{
	int i,j;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==m)
			printf("*");
			else
			{
				if(j==1||j==n)
				printf("*");
				else
				printf(" ");
			}
		} 
		printf("\n");
	}
}


int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    print(m, n);
}

/**************************************************************
	Problem: 2416
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

