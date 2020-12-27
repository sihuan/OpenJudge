#include <stdio.h>
#include <string.h>
int main() {
    int q,i,t,m,n,x;
    int a[1001]= {0};
    int b[1001]= {0};
    scanf("%d",&n);
    for(q=1; q<=n; q++)
    {
        if(q%2!=0)
        {
            scanf("%d",&t);
            for(i=0; i<t; i++)
                scanf("%d",&a[i]);
            if(q!=1)
            {
                if(t>m)
                    x=t;
                else
                    x=m;
                if(x==0)
                    printf("\n");
                else
                {
                    for(i=0; i<x; i++)
                    {
                        if(i==0)
                            printf("%d",a[i]+b[i]);
                        else
                            printf(" %d",a[i]+b[i]);
                    }
                    printf("\n");
                    memset(b,0,sizeof(b));
                }
            }
            if(q==n)
            {
                for(i=0; i<t; i++)
                {
                    if(i==0)
                        printf("%d",a[i]);
                    else
                        printf(" %d",a[i]);
                }
                printf("\n");
            }
        }
        else
        {
            scanf("%d",&m);
            for(i=0; i<m; i++)
                scanf("%d",&b[i]);
            if(t>m)
                x=t;
            else
                x=m;
            if(x==0)
            {
                printf("\n");
            } else {
                for(i=0; i<x; i++) {
                    if(i==0)
                    {
                        printf("%d",a[i]+b[i]);
                    } else
                    {
                        printf(" %d",a[i]+b[i]);
                    }
                }
                printf("\n");
                memset(a,0,sizeof(a));
            }
            if(q==n)
                {
                for(i=0; i<m; i++)
                {
                    if(i==0)
                    {
                        printf("%d",b[i]);
                    } else {
                        printf(" %d",b[i]);
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1052
	User: 202001061101
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

