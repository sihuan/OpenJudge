#include <stdio.h>
#include <stdlib.h>
#define MAX_STR_LEN 11
#include<string.h>

int strToInt(char str[])
{
    int x=0,i;
    int y;
    y=strlen(str);
    if(y==0)
       x=-1;
    else
    {for(i=0;str[i]!='/0';i++)
    {
        if(str[i]>='0'&&str[i]<='9')
            x=(str[i]+x*10)-'0';
        else
            break;
    }
    }
        return x;
}

int main()
{
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
        printf("%d\n", strToInt(s));
    return 0;
}

/**************************************************************
	Problem: 1133
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

