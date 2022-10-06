#include <stdio.h>
#define MAX_STR_LEN 101

char * str_cpy(char * t, char * s, int n)
{
    int i=0;
    while(i<n)
    {
        if(s[i]==0)
            break;
        t[i]=s[i];
        i++;
//        putchar(t[i]);
    }
    t[i]=0;
    return t;
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
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

