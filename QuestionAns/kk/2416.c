#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void print(int m,int n)
{
    int i,j;
    for(i=0;i<n;i++)
        printf("*");
    putchar('\n');
    for(i=0;i<m-2;i++)
    {
        putchar('*');
        for(j=0;j<n-2;j++)
            putchar(' ');
        puts("*");
    }
    for(i=0;i<n;i++)
        printf("*");
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    print(m, n);
}

/**************************************************************
	Problem: 2416
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

