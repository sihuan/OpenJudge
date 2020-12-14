#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,j;
    int s=0,l=0;
    int a[200001]= {0};
    scanf("%d",&T);
    for( int i=0; i<T; i++)
    {
        int n;
        scanf("%d",&n);
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        s=0;
        for(j=0; j<n; j++)
        {
            s=s+a[j];
        }
        float v;
        v=(float)s/(float)n;
        l=0;
        int h[200001]= {0};
        for(j=0; j<n; j++)
        {
            if(v==a[j])
            {
                l++;
                h[l]=j+1;
            }
        }
        int u;
        if(l!=0)
        {
            printf("%d\n",l);
            for(u=1; u<=l; u++)
            {
                if(u==l)
                    printf("%d\n",h[u]);
                else
                    printf("%d ",h[u]);
            }
        }
        if(j==n&&l==0)
                printf("%d\n",l);
    }
    return 0;
}

/**************************************************************
	Problem: 1080
	User: 201901060819
	Language: C
	Result: Accepted
	Time:32 ms
	Memory:2240 kb
****************************************************************/

