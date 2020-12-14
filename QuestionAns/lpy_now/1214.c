#include<stdio.h>
#define MAX_STR_LEN 110
char *str_cat(char *t, char *s, int n)
{
    int i,j,k;
    for(i=0;s[i]!='\0';i++);
    for(j=0;t[j]!='\0';j++);
    if(i<n){
        n=i;
    }
    for(k=0;k<n;++k,++j){
        t[j]=s[k];
    }
    t[j]='\0';
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

