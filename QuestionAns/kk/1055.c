#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void input(int matx[][100],int m,int n)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&matx[i][j]);
}
void output(int stor[][100],int m,int n)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            if(j==n-1)
                printf("%d\n",stor[i][j]);
            else
                printf("%d ",stor[i][j]);
        }
}
void copy(int matx1[][100],int matx2[][100],int m,int n)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            matx1[i][j]=matx2[i][j];
//    output(matx1,m,n);
}
void multiply(int stor[][100],int inmatx[][100],int m,int n,int q)
{
    int result[100][100]={0};
    for(int i=0;i<q;i++)
        for(int j=0;j<m;j++)
            for(int k=0;k<n;k++)
                result[j][i]=stor[j][k]*inmatx[k][i]+result[j][i];
    for(int i=0;i<m;i++)
        for(int j=0;j<q;j++)
            stor[i][j]=result[i][j];
//    output(result,m,q);
}

int main()
{
    int stor[100][100],inmatx[100][100];
    int m,n,p,q;
    int flag=1;
    scanf("%d%d",&m,&n);
    input(stor,m,n);
    while(scanf("%d%d",&p,&q),p!=0&&q!=0)
    {
        input(inmatx,p,q);
        if(flag)
            flag--;
        else
            printf("\n");
        if(n!=p)
        {
            printf("Not satisfied the definition of matrix multiplication!\n");
            copy(stor,inmatx,p,q);
            m=p;
            n=q;
        }

        else
        {
            multiply(stor,inmatx,m,n,q);
            n=q;
            output(stor,m,n);
        }
    }
}

/**************************************************************
	Problem: 1055
	User: 202001060117
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:788 kb
****************************************************************/

