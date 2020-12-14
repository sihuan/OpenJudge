#include<stdio.h>
#include<string.h>
#define MAX_STR_LEN 101

char * str_rev(char * t, char * s)
{
    int i,j,l;
    char * tp = t;
    l = strlen(s);
    for(i = 0,j=l-1;i<l;i++,j--){
        *(tp+j)=*(s+i);
    }
    *(tp+i)='\0';
    return t;
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

