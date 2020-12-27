#include <stdio.h>
#include <stdlib.h>

int main()
{
	char a[101][101];
	int i=0;
	int x=0;
	while(gets(a[x])!=NULL)
	{
		i++;
		x++;
	}
	int j;
	for(j=i-1;j>=0;j--)
	printf("%s\n",a[j]);
    return 0;
}

/**************************************************************
	Problem: 2414
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

