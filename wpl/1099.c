#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=0;k<n-j-1;k++)
        {
            int t;
            if(a[k]>a[k+1])
            {
                t = a[k];
                a[k] = a[k+1];
                a[k+1] = t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("%d",a[i]);
        }
        else
        {
            printf(" %d",a[i]);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1099
	User: 201901060819
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

