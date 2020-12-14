#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	char *p;
	char *s = (char *)malloc(sizeof(char)*105);
	int length;
	while(1)
	{
		gets(s);
		length = strlen(s);
		for(p=s+length-1; p>=s; --p)
		{
			if(isspace(*p) == 0)
			{
				*(p+1) = '\0';
				break;
			}
		}
		for(p=s; p<s+length; ++p)
		{
			if(isspace(*p) == 0)
			{

				s = p;
				break;
			}
		}
		puts(s);
		if(strcmp(s,"END") == 0)
			break;
	}

	return 0;
}

/**************************************************************
	Problem: 1094
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

