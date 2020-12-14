#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX_STR_LEN 1005

char *trim(char *s){
    int i,j,k;
    char t[103];
    for(i=0;i<strlen(s);++i){
        if(isspace(s[i])==0){
            break;
        }
    }
    for(j=strlen(s)-1;j>=0;j--){
        if(isspace(s[j])==0){
            break;
        }
    }
    for(k=0;i<=j;k++){
        t[k]=s[i];
        ++i;
    }
    t[k]='\0';
    memset(s,0,sizeof s);
    strcpy(s,t);
    return s;
}


int main()
{
    char str[MAX_STR_LEN], *p;
    do
    {
        gets(str);
        p = trim(str);
        puts(p);
    } while(strcmp(p, "END"));
    return 0;
}
/**************************************************************
	Problem: 1229
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

