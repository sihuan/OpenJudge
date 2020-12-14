#include <stdio.h>
#define MAX_STR_LEN 105
char * str_cpy(char * t, char * s, int n)
{
	char *ss = t;
	int i;
	for(i=0; i<n; ++i)
	{
		ss[i] = s[i];
		if(ss[i] == '\0') break;
	}
	ss[i] = '\0';
	return ss;
}

int main()
{
    int n;
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(scanf("%d", &n) != EOF && getchar())
    {
        gets(s);
        p = str_cpy(str, s, n);
        puts(p);
        puts(str);
    }
    return 0;
}

/**************************************************************
	Problem: 1216
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

