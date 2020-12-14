#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define SWAP(a,b,t) t=a; a=b; b=t;
#define MAX 10005

void putSuo(int n)
{
    int i;
    for(i=0; i<4*n; ++i)
        putchar(' ');
}
int main()
{
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
    int suo = 0;
    char ch,pre;
    int is = 0;
    while((ch = getchar()) != EOF)
    {
        if(isspace(ch)) continue;
        if(ch == '{')
        {
            if(suo) putchar(' ');
            putchar(ch);
            putchar('\n');
            putSuo(++suo);
        }
        else if(ch == ',')
        {
            putchar(ch);
            putchar(' ');
        }
        else if(ch == ';')
        {
            putchar(ch);
            putchar('\n');
        }
        else if(ch != '}' && pre == ';')
        {
            putSuo(suo);
            putchar(ch);
        }
        else if(ch== '}')
        {
            putSuo(--suo);
            putchar(ch);
        }
        else
        {
            putchar(ch);
        }

        pre = ch;
    }

    return 0;
}

/**************************************************************
	Problem: 1070
	User: 201601011420
	Language: C
	Result: Accepted
	Time:44 ms
	Memory:748 kb
****************************************************************/

