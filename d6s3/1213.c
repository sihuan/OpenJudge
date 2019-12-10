#include<stdio.h>
#define MAX_STR_LEN 202

char * str_cat(char * t, char * s)
{
    char * tp = t;
    int i=0,j=0;
    while(*(tp+i)!='\0')
        i++;
    //i-=1;
    while(*(s+j)!='\0'){
        *(tp+i)=*(s+j);
        i++;
        j++;
    }
    *(tp+i)='\0';
    return t;
}

int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL && gets(str) != NULL)
    {
        p = str_cat(str, s);
        puts(p);
        puts(str);
    }
    return 0;
}

/**************************************************************
	Problem: 1213
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

