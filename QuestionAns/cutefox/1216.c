#include<stdio.h>
#define MAX_STR_LEN 104
char * str_cpy(char * t, char * s,int n)
{
    int cnt=0;
    char *p2;
    for(p2 = s; *p2!='\0'; p2++)
    {
        cnt++;
    }
    char *p3 = t;
    if(n>=cnt)
        for(p2 = s; *p2!='\0'; p2++)
        {
            *p3=*p2;
            p3++;
        }
    if(n<cnt)
    {
        cnt=1;
        for(p2 = s; cnt<=n; p2++)
        {
            cnt++;
            *p3=*p2;
            p3++;
        }
    }
   *p3='\0';
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
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

