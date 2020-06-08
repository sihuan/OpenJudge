#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void input(int input[102][102],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&input[i][j]);
        }
    }
}
int main()
{
    int m,n,m1,n1,i,j,k,flag=0;
    int a[102][102],b[102][102],c[102][102];
    scanf("%d%d",&m,&n);
    input(a,m,n);
    m1=m;
    n1=n;
    while(m!=0||n!=0)
    {
        scanf("%d%d",&m,&n);
        if(m==0&&n==0)
            break;
        i=0;
        while(i<m)
        {
            for(j=0;j<n;j++)
                scanf("%d",&b[i][j]);
                i++;
        }
        if(n1==m)
        {
            for(i=0;i<m1;i++)
            {
                for(j=0;j<n;j++)
                {
                    c[i][j]=0;
                    for(k=0;k<m;k++)
                        c[i][j]+=a[i][k]*b[k][j];
                }
            }
            m1=m1;
            n1=n;
            if(flag!=0)
                printf("\n");
            flag=1;
            for(i=0;i<m1;i++)
            {
                for(j=0;j<n1;j++)
                {
                    if(j==0)
                        printf("%d",c[i][j]);
                    else
                        printf(" %d",c[i][j]);
                    a[i][j]=c[i][j];
                }
                printf("\n");
            }
        }
        else
        {
            if(flag!=0)
                printf("\n");
            flag=1;
            printf("Not satisfied the definition of matrix multiplication!\n");
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {
                    a[i][j]=b[i][j];
                }
            }
            m1=m;
            n1=n;
            }
    }
}

/**************************************************************
	Problem: 1055
	User: 201901060203
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:796 kb
****************************************************************/

