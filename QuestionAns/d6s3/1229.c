#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR_LEN 101

char * trim(char *st)
{
    int i=0,j=strlen(st)-1,k;
    while(isspace(st[i]))
        i++;
    while(isspace(st[j])){
        st[j]='\0';
        j--;
    }
    k=i;
    return st+i;
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

