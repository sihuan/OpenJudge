#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define SWAP(a,b,t) t=a; a=b; b=t;

int matrix[105][105];
void Read(int m,int n)
{
    int i,j;
    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
            scanf("%d",&matrix[i][j]);
    }
}
void ChangeL(int i,int j,int n)
{
    int k;
    int t;
    for(k=0; k<n; ++k)
    {
        SWAP(matrix[i][k],matrix[j][k],t);
    }
}
void ChangeR(int i,int j,int n)
{
    int k;
    int t;
    for(k=0; k<n; ++k)
    {
        SWAP(matrix[k][i],matrix[k][j],t);
    }
}
void Print(int m,int n)
{
    int i,j;
    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
        {
            if(j) putchar(' ');
            printf("%d",matrix[i][j]);
        }
        putchar('\n');
    }
}
int main()
{
    int m,n;
    char x[10];
    scanf("%d%d",&m,&n);
    Read(m,n);
    int i,j;
    while(scanf("%s %d %d",&x,&i,&j) != EOF)
    {
        if(strcmp(x,"line") == 0)
            ChangeL(i,j,n);
        else if(strcmp(x,"row") == 0)
            ChangeR(i,j,m);
        Print(m,n);
        putchar('\n');
    }


    return 0;
}

/**************************************************************
	Problem: 1634
	User: 201601011420
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:788 kb
****************************************************************/

