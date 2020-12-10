#include<stdio.h>

int main()
{
    int n,m,i,j,x;
    int a[1010];
    while( scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        if(scanf("%d",&m)!=EOF)
        {
            if(m<=n)
            {
                if(n==0)
                {
                    printf("\n");
                    continue;
                }
                for(j=0;j<m;j++)
                {
                    scanf("%d",&x);
                    a[j]+=x;
                }
                printf("%d",a[0]);
                for(j=1;j<n;j++)
                    printf(" %d",a[j]);
                printf("\n");
            }
            else
            {
                for(j=0;j<n;j++)
                {
                    scanf("%d",&x);
                    a[j]+=x;
                }
                for(j=n;j<m;j++)
                    scanf("%d",&a[j]);
                printf("%d",a[0]);
                for(j=1;j<m;j++)
                    printf(" %d",a[j]);
                printf("\n");
            }
        }
        else
        {
            if(n==0)
                {
                    printf("\n");
                    break;
                }
            printf("%d",a[0]);
            for(j=1;j<n;j++)
                printf(" %d",a[j]);
            printf("\n");
            break;
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1050
	User: 202001060915
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

