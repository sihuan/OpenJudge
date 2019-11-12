#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 59
double a[59][59],b[59],x[59];

int printff()
{

}

int main()
{
    int n,i,j,k,nn,kl;
    double temp;
    scanf("%d",&nn);
    for(kl=0;kl<nn;++kl)
    {
        scanf("%d",&n);
        for(i=1;i<=n;++i)
        {
            for(j=1;j<=n;++j)
            {
                    scanf("%lf",&a[i][j]);
            }
            scanf("%lf",&b[i]);
        }
        /*for(j=1;j<=n-1;++j)
        {
            for(i=j+1;i<=n;++i)
            {
                temp=a[i][j]/a[j][j];
                for(k=1;k<=n;++k) a[i][k]=a[i][k]-temp*a[j][k];
                b[i]=b[i]-temp*b[j];
            }
        }*/
        for(j=1;j<=n-1;j++)
    {
        if(a[j][j]==0)
        {
           for(i=j+1;i<=n;i++)
           {
               if(a[i][j]!=0)
               {
                   /*交换增广矩阵的第i行与第j行的所有元素*/
                   for(k=1;k<=n;k++)
                  {
                      a[i][k]+=a[j][k];
                      a[j][k]=a[i][k]-a[j][k];
                     a[i][k]-=a[j][k];
                   }
                   b[i]+=b[j];
                 b[j]=b[i]-b[j];
                  b[i]-=b[j];
                }
               continue;       //找到第j列第一个不为0的元素即跳回第一层循环
            }
    }
  }
 for(j=1;j<=n-1;j++)
    {
       /*使系数矩阵转化为上三角矩阵，常数矩阵相应进行变换*/
        for(i=j+1;i<=n;i++)
       {
            temp=a[i][j]/a[j][j];
            b[i]=b[i]-temp*b[j];
           for(k=1;k<=n;k++)
               a[i][k]=a[i][k]-temp*a[j][k];

      }
 }


        x[n]=b[n]/a[n][n];
        for(j=n-1;j>=1;--j)
        {
            x[j]=b[j];
            for(k=n;k>=j+1;--k) x[j]=x[j]-x[k]*a[j][k];
            x[j]=x[j]/a[j][j];
        }
        for(j=1;j<=n;++j) printf("x%d=%.3lf\n",j,x[j]);
        printf("\n");
    }
}

/**************************************************************
	Problem: 1434
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:776 kb
****************************************************************/

