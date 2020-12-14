#include <stdio.h>
#define MAX_STR_LEN 1009
int str_chr(char s[], char ch)
{
    int i=-1;
    int k;
    for(k=0;s[k]!=0;++k)
    {
        if(ch==s[k])
        {
            return k;
        }
    }
    return -1;
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

