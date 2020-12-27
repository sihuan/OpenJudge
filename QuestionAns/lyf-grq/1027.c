#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main()
{
	int m,n;
	int i,j;
	scanf("%d %d",&m,&n);
	printf("=====\n");
	for(i=n;i>=m;i--)
	{
		if(i==3)
		printf("3\n");
		if(i==2)
		printf("2\n");
		for(j=2;j<=floor(sqrt(i));j++)
		{
			if(i%j==0)
			break;
			else if(j==floor(sqrt(i)))
			printf("%d\n",i);
		}
	}
	printf("=====");
}
/**************************************************************
	Problem: 1027
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

