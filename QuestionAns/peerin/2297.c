#include <stdio.h>
#define MAX_STR_LEN 1001

char * str_upr(char *s){
    int index = 0;
    while(s[index]!='\0'){
        char ch = s[index];
        if(ch>='a'&&ch<='z'){
            ch = ch - 32;
             s[index] = ch;
        }
        index++;
    }
    return s;
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
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

