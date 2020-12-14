#include<stdio.h>
#define MAX_STR_LEN 110

char *str_rev(char *str,char *s){
    char ch[MAX_STR_LEN];
    int i,j;
    for(i=0;s[i]!='\0';++i){
        ch[i]=s[i];
    }
    --i;
    for(j=0;i>=0;i--,++j){
        str[j]=ch[i];
    }
    str[j]='\0';
    return str;
}

int main()
{
    char s[MAX_STR_LEN], str[MAX_STR_LEN], *p;
    gets(s);
    p = str_rev(str, s);
    puts(p);
    puts(str);
    return 0;
}
/**************************************************************
	Problem: 1235
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

