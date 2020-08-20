#include<stdio.h>
#define MAX_STR_LEN 500
char * str_cpy(char * t, char * s,int n)
{
    int i=0;
    char *t1=t;
    while(s!='\0')
    {
        if ( i>= n )
            break ;
        *t=*s;
        t++;
        s++;
        i++;
    }
    *t=0;
    return t1;
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

