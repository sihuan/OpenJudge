#include<stdio.h>
#include<stdlib.h>
#define MAX_STR_LEN 1000

char * str_alcpy(char * s,char * str){
    int i=0;
    char *p=malloc(1000*sizeof(char));
    int j=0;
    while(str[i]!='\0'){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
            s[j]=str[i];
            p[j]=str[i];
            ++j;
        }
        ++i;
    }
    s[j]='\0';
    p[j]='\0';
    return p;
}

int main()
{
    char str[MAX_STR_LEN], s[MAX_STR_LEN], *p;
    while(gets(str) != NULL)
    {
        p = str_alcpy(s, str);
        puts(p);
        puts(s);
    }
}

/**************************************************************
	Problem: 2418
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

