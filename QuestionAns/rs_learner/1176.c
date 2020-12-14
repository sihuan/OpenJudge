#include<stdio.h>
int main()
{
    int n,i,j,a[1001]={0},t,s,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
            for(j=0;j<=t-1;j++)
            {
                scanf("%d",&s);
                a[j]=s;
            }
            for(j=0;j<=t-1;j++)
            {
                for(k=j+1;k<=t-1;k++)
                {
                    if(a[k]==a[j])
                    {
                        a[k]=(a[0]-1);
                    }
                }
            }
            for(j=0;j<=t-1;j++)
            {
                if(j==0)
                    printf("%d",a[j]);
                else if(a[j]==(a[0]-1))
                    continue;
                else
                    printf(" %d",a[j]);
            }
            printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1176
	User: 201801020908
	Language: C
	Result: Accepted
	Time:24 ms
	Memory:748 kb
****************************************************************/

