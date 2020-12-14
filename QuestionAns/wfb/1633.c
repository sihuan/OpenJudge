#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MAX_STR_LEN 100
int ans[15][15] = {{0},{0,1},};
void CreatTable()
{
    int i,j;
    for(i=2; i<14; ++i)
    {
        for(j=1; j<=i; ++j)
            ans[i][j] = ans[i-1][j] + ans[i-1][j-1];
    }
}
void PrintSp(int n,int b)
{
    int i;
    for(i=0; i<b*n; ++i)
        putchar(' ');
}
void PrintAns(int n)
{
    int i;
    for(i=1; i<=n; ++i)
    {
        printf("%4d",ans[n][i]);
    }
}
int main()
{
    CreatTable();
    int n;
    int i;
    int cnt = 0;
    while(scanf("%d",&n) != EOF)
    {
        if(cnt ++) putchar('\n');
        for(i=1; i<=n; ++i)
        {
            PrintSp(n-i,2);
            PrintAns(i);
            putchar('\n');
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1633
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

