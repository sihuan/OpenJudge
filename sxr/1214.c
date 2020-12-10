#include <stdio.h>
#define MAX_STR_LEN 210

char * str_cat(char * t, char * s, int n)
{
    int i,k=0,j=0;
    for(i=0; s[i]!='\0'; i++)
        j++;
    for(i=0; t[i]!='\0'; i++)
        k++;
    if(j<=n)
    {
        for(i=0; s[i]!='\0'; i++)
        {
            t[k+i]=s[i];
        }
        t[i+k]='\0';
    }
    else
    {
        for(i=0; i<n; i++)
        {
            t[k+i]=s[i];
        }
        t[i+k]='\0';
    }
    return t;
}


int main()
{
    int n;
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(scanf("%d", &n) != EOF && getchar())
    {
        gets(s);
        gets(str);
        p = str_cat(str, s, n);
        puts(p);
        puts(str);
    }
    return 0;
}

/**************************************************************
	Problem: 1214
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

