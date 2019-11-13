#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	int i;
	char string[1005];
	for(i=1; i<=n; ++i)
	{
		gets(string);
		printf("case %d:length=%d.\n",i,strlen(string));
	}

	return 0;
}

/**************************************************************
	Problem: 1149
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

