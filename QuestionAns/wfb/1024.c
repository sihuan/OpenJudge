#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int i;
	int min = 2147483647;
	int max = -2147483648;
	int x;
	for(i=0; i<n; ++i)
	{
		scanf("%d",&x);
		if(x>max) max = x;
		if(x<min) min = x;
	}
	printf("The maximum number is %d.\n",max);
	printf("The minimum number is %d.\n",min);

	return 0;
}

/**************************************************************
	Problem: 1024
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

