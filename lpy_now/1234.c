#include<stdio.h>
#include<string.h>
#define MAX_STR_LEN 110

void revs(char s[]){
    int len=strlen(s);
    int i,j=len-1;
    char ch[MAX_STR_LEN];
    for(i=0;i<len;++i){
        ch[j]=s[i];
        --j;
    }
    for(i=0;i<len;++i){
        s[i]=ch[i];
    }
}
int main()
{
    char s[MAX_STR_LEN];
    gets(s);
    revs(s);
    puts(s);
    return 0;
}
/**************************************************************
	Problem: 1234
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

