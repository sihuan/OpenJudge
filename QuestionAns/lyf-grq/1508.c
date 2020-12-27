#include<stdio.h>
#include<string.h>
int main()
{
    int n,x[1001],t;
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&x[i]);
        }
        for(int j=1;j<=n-1;j++)
        {
            for(int k=j+1;k<=n;k++)
            {
                if(x[j]>=x[k])
                {
                    t=x[j];
                    x[j]=x[k];
                    x[k]=t;
                }
            }
        }
            if(n%2==1)
                printf("%d\n",x[(n+1)/2]);
            else
                printf("%lg\n",(x[n/2+1]+x[n/2])*1.0/2.0);
    }
}


/**************************************************************
	Problem: 1508
	User: 202001061101
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

