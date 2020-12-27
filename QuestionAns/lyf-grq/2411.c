#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	while(scanf("%c",&c)!=EOF)
	{
		if(c<=90&&c>=65)
		c=c+32;
		if(c>=90&&c<=122)
		printf("%d\n",c-96);
	}
    return 0;
}

/**************************************************************
	Problem: 2411
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

