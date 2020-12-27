#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[10001]={0},b[10001]={0},c[10001]={0};
    int i=1,j=1,k=1,l,x,count=0;
    while(scanf("%d",&n)!=EOF)
    {
        count++;
        if(count%2==1)
        {
           for(i=1;i<=n;i++)//奇数行放a组
              scanf("%d",&a[i]);
              i=n;
        }
        else
        {
           for(j=1;j<=n;j++)//偶数行放b组
               scanf("%d",&b[j]);
               j=n;
        }
        if(count%2==0)//2行就相加
        {
            if(i>=j)
            {
                for(k=1;k<=i;k++)
                    c[k]=a[k]+b[k];
            }
            else
            {
                for(k=1;k<=j;k++)
                    c[k]=a[k]+b[k];
            }
            if(i>=j)
                {
                   for(int x=1;x<=i;x++)
                   {
                    if(x==1)
                    printf("%d",c[1]);
                    else
                    printf(" %d",c[x]);
                   }
                }
            else
                {
                   for(int x=1;x<=j;x++)
                   {
                    if(x==1)
                    printf("%d",c[1]);
                    else
                    printf(" %d",c[x]);
                   }
                }
                printf("\n");
                for(l = 0; l < 1001; l++)
                {
                  a[l] = 0;
                  b[l] = 0;
                  c[l] = 0;
                }
        }

    }
    if(count%2==1)
    {
        if(n!=0)
        {
            printf("%d",a[1]);
            for(x=2;x<=n;x++)
            printf(" %d",a[x]);
            printf("\n");
        }
        if(n==0)
             printf("\n");
    }
}

/**************************************************************
	Problem: 1050
	User: 202001061101
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:792 kb
****************************************************************/

