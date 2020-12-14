#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	int n;
	scanf("%d",&n);
	int ans[50] = {0,1,2,3,5,8};
	int m;
	int i,j;
	for(i=6; i<=45; ++i)
	{
		ans[i] = ans[i-1] + ans[i-2];
	}
	for(i=0; i<n; ++i)
	{
		scanf("%d",&m);
		printf("%d\n",ans[m]);
	}
	return 0;
}

/**************************************************************
	Problem: 1095
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

