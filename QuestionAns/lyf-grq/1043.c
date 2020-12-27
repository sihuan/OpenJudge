#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main()
{
	int n;
	int i,sum=0;
	int x;
	int y;
	scanf("%d",&y);
	for(int j=1;j<=y;j++)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%d",&x);
			sum+=x;
		}
		printf("%d\n",sum);
		sum=0;
	}
}
/**************************************************************
	Problem: 1043
	User: 202001061101
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

