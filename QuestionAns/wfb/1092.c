#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s",s);
    int n = strlen(s);
    int i;
    for(i=n-1; i>=0; --i)
        putchar(s[i]);
    putchar('\n');
    return 0;
}

/**************************************************************
	Problem: 1092
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

