#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

char *change(char* str)
{
    char *nstr;
    nstr=(char *)malloc(sizeof(char)*101);
    int i=0,j=0;
    while(str[i]!=0)
    {
        if(isalpha(str[i]))
        {
            nstr[j]=str[i];
            j++;
        }
        i++;
    }
    nstr[j]=0;
    return nstr;
}
int main()
{
    char *p, str[101];
    gets(str);
    p=change(str);
    puts(str);
    puts(p);
    free(p);
    return 0;
}
/**************************************************************
	Problem: 2544
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

