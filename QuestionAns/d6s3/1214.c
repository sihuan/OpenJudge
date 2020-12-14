#include<stdio.h>
#define MAX_STR_LEN 101

char * str_cat(char * t, char * s,int n)
{
    char * tp = t;
    int i=0,j=0,k=0;
    while(*(tp+i)!='\0')
        i++;
    while(*(s+j)!='\0'&&k++<n){
        *(tp+i)=*(s+j);
        i++;
        j++;
    }
    *(tp+i)='\0';
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

