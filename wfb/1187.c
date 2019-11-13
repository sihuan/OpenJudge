#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	int i,j;
	char string[105];
	int length;
	int sum;
	for(i=0; i<n; ++i)
	{
		scanf("%s",string);
		length = strlen(string);
		sum = 0;
		for(j=0; j<length; ++j)
		{
			sum += string[j]-48;
		}
		if(sum % 3 == 0)
			printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}

/**************************************************************
	Problem: 1187
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

