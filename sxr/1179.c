#include<stdio.h>

int main()
{
    int m,n,i,j,k=0,flag=0;
    int a[500005]={0};
    int b[500005]={0};
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        for(i=1;i<=n-m+1;i++)
            a[i]=i+m-1;
        for(i=1;i<=n-m+1;i++)
        {
            if(a[i]%2==0&&a[i]!=2)
                a[i]=1;
            if(a[i]==1)
                continue;
            for(j=3;j*j<=a[i];j+=2)
            {
                if(a[i]%j==0)
                {
                    flag=1;
                    a[i]=1;
                    break;
                }
            }
            if(flag==1)
            {
                flag=0;
                continue;
            }
            k++;
            b[k]=a[i];
            for(j=i+1;j<=n-m+1;j++)
            {
                if(a[j]==1)
                    continue;
                if(a[j]%a[i]==0)
                    a[j]=1;
            }
        }
        for(i=1;i<=k;i++)
            printf("%d\n",b[i]);
        if(k==0)
            printf("\n");
        printf("\n");
        flag=0;
        k=0;
    }
    return 0;
}
/**************************************************************
	Problem: 1179
	User: 202001060915
	Language: C
	Result: Accepted
	Time:104 ms
	Memory:4580 kb
****************************************************************/

