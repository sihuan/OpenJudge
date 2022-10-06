#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int m,n,p;
    scanf("%d%d%d",&m,&p,&n);
    int i,j,k;
    int mx1[100][100],mx2[100][100],mx3[100][100]={0};
    for(i=0;i<m;i++)
        for(j=0;j<p;j++)
            scanf("%d",&mx1[i][j]);
    for(i=0;i<p;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mx2[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            for(k=0;k<p;k++)
                mx3[i][j]+=mx1[i][k]*mx2[k][j];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            if(j==n-1)
                printf("%d\n",mx3[i][j]);
            else
                printf("%d ",mx3[i][j]);
        }
}


/**************************************************************
	Problem: 2514
	User: 202001060117
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:792 kb
****************************************************************/

