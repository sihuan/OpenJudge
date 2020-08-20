#include<stdio.h>
#define MAX_STR_LEN 1100

char *str_upr(char str[]){
    int len=0;
    while(str[len]!='\0'){
        ++len;
    }
    int i;
    for(i=0;i<len;++i){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    return str;
}

int main()
{
    char str[MAX_STR_LEN], *p;
    while(gets(str) != NULL)
    {
        p = str_upr(str);
        puts(p);
        puts(str);
    }
}

/**************************************************************
	Problem: 2297
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

