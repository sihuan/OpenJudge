#include <stdio.h>

#define OVERFLOW -2
#define MAX_STR_LEN 1500

char * str_chr(char *s, char ch)
{
    char *p;
    for(p=s; *p; ++p)
        if(*p == ch) break;
    if(*p) return p;
    else return NULL;
}

int main()
{
    char ch;
    char s[MAX_STR_LEN], *s1;
    while(gets(s) != NULL)
    {
        ch = getchar();
        s1 = str_chr(s, ch);
        if(s1 == NULL)
            printf("-1\n");
        else
            printf("%d\n", s1 - s);
        gets(s); // 仅用于读出字符后的换行符，以确保while循环内gets读到正确的数据，无其他意义，于理解题意无关。
    }
    return 0;
}
/**************************************************************
	Problem: 1487
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

