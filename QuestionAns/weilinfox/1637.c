#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char ch[105];
    void printB(char);

    while (scanf("%s", ch)==1)
    {
        int i, len=strlen(ch);
        for (i=0; i<len; i++)
        {
            printB(ch[i]);
        }
        putchar('\n');
    }

    return 0;
}

void printB(char ch)
{
    int d;
    char c[5];
    if (ch<='9')
        d=ch-'0';
    else
        d=ch-'A'+10;

    int i=3;
    while (i>=0)
    {
        c[i]='0'+d%2;
        d/=2;
        i--;
    }
    for (i=0; i<4; i++)
    {
        printf("%c", c[i]);
    }
}

/**************************************************************
	Problem: 1637
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

