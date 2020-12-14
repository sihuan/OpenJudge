#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char s[32];
	int i;
	int length;
	unsigned ans;
	while(scanf("%s",s) != EOF)
	{
		length = strlen(s);
		ans = 0;
		for(i=0; i<length; ++i)
		{
			ans =ans*2+(s[i]-48);
		}
		printf("%u\n",ans);
	}
	return 0;
}

/**************************************************************
	Problem: 1242
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

