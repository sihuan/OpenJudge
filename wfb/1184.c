#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void CreateA(int a[][50],int n)
{
    int k=1;
    int i=0,j=n-1;
    a[i][j] = k++;
    while(k<=n*n)
    {
        while(i+1<n && !a[i+1][j])
            a[++i][j] = k++;
        while(j-1>=0 && !a[i][j-1])
            a[i][--j] = k++;
        while(i-1>=0 & !a[i-1][j])
            a[--i][j] = k++;
        while(j+1<n && !a[i][j+1])
            a[i][++j] = k++;
    }
}
void PrintA(int a[][50],int n)
{
    int i,j;
    for(i=0; i<n; ++i)
    {
        for(j=0; j<n; ++j)
        {
            if(j) putchar(' ');
            printf("%d",a[i][j]);
        }
        putchar('\n');
    }
    putchar('\n');
}
int main()
{
    int a[50][50];
    int n;
    while(scanf("%d",&n) != EOF)
    {
        memset(a,0,sizeof(a));
        CreateA(a,n);
        PrintA(a,n);
    }
    return 0;
}

/**************************************************************
	Problem: 1184
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

