#include<stdio.h>
#include<stdlib.h>
#define MAX_STR_LEN 101

char * str_cat(char * str, char * s)
{
    char* mst=(char*)malloc(sizeof(char)*MAX_STR_LEN*2);
    int i=0,j=0;
    while(str[i]!='\0'){
        mst[i]=str[i];
        i++;
    }
    while(s[j]!='\0'){
        mst[i]=s[j];
        i++,j++;
    }
    mst[i]='\0';
    return mst;
}

int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    while(gets(s) != NULL && gets(str) != NULL)
    {
        p = str_cat(str, s);
        puts(str);
        puts(s);
        puts(p);
        free(p);
    }
    return 0;
}
/**************************************************************
	Problem: 1370
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

