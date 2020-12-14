#include <stdio.h>

#define OVERFLOW -2
#define MAX_STR_LEN 1500

int str_chr(char s[], char ch)
{
    int i;
    for(i=0; s[i]; ++i)
        if(s[i] == ch) break;
    if(s[i]) return i;
    else return -1;
}

int main()
{
    char ch;
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
    {
        ch = getchar();
        printf("%d\n", str_chr(s, ch));
        gets(s); // 仅用于读出字符后的换行符，以确保while循环内gets读到正确的数据，无其他意义，于理解题意无关。
    }
    return 0;
}
/**************************************************************
	Problem: 1337
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

