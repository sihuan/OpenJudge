#include <stdio.h>
#include<math.h>
#define MAX_STR_LEN 200

char * str_cat(char * t, char * s,int n)
{
    int i=0;
    while(t[i++]!=0);
    //printf("%d",i);
    int k;
    for(k=0;s[k]!=0&&k<n;++k)
    {
        t[i+k-1]=s[k];
    }
    t[i+k-1]=0;
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

