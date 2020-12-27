#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
  int m,n,i,j,k;
  int a[101][101],b[101][101],c[101][101];
  int hang,lie;
  scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    }
    hang=m;lie=n;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
         if(m==0&&n==0)
             break;
        for(i=1;i<=m;i++)
       {
         for(j=1;j<=n;j++)
            scanf("%d",&b[i][j]);
       }
       if(lie==m)
       {
         for(i=1;i<=hang;i++)
         {
             for(j=1;j<=n;j++)
             {
                 for(k=1;k<=lie;k++)
                    c[i][j]+=a[i][k]*b[k][j];
             }
         }
         lie=n;
         for(i=1;i<=hang;i++)
         {
             for(j=1;j<=lie;j++)
               {
                if(j==1)
                printf("%d",c[i][j]);
                else
                printf(" %d",c[i][j]);
                a[i][j]=c[i][j];
               }
               printf("\n");
         }
            printf("\n");
            memset(c,0,sizeof(c));
       }
       else
       {
           printf("Not satisfied the definition of matrix multiplication!\n");
           printf("\n");
           for(i=1;i<=m;i++)
           {
               for(j=1;j<=n;j++)
                a[i][j]=b[i][j];
           }
           memset(c,0,sizeof(c));
           hang=m;lie=n;
       }
    }
}







/**************************************************************
	Problem: 1055
	User: 202001061101
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:796 kb
****************************************************************/

