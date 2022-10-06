#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void input(int matx[][100],int m,int n)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&matx[i][j]);
}
void output(int matx1[][100],int matx2[][100],int m,int n)
{
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            if(j==n-1)
                printf("%d\n",matx1[i][j]+matx2[i][j]);
            else
                printf("%d ",matx1[i][j]+matx2[i][j]);
        }
}
int main()
{
    int matx1[105][105],matx2[105][105];
    int m,n,x,y;
    int flag=1;
    while(scanf("%d%d",&m,&n),m!=0&&n!=0)
    {
        input(matx1,m,n);
        scanf("%d%d",&x,&y);
        if(x==0&&y==0)
            return 0;
        input(matx2,x,y);
        if(flag)
            flag--;
        else
            printf("\n");

        if(m==x&&n==y)
            output(matx1,matx2,m,n);
        else
            printf("Not satisfied the definition of matrix addition!\n");
    }
}

/**************************************************************
	Problem: 1054
	User: 202001060117
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:760 kb
****************************************************************/

