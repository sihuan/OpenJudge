#include<stdio.h>

int main()
{
    int i,j,m,n,x,k=1;
    int a[1005]={0};
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&x);
            if(j==0) a[1]=x;
            if(a[k]!=x)
            {
                k++;
                a[k]=x;
            }
        }
        printf("%d",a[1]);
        for(j=2;j<=k;j++)
            printf(" %d",a[j]);
        printf("\n");
        k=1;
    }
    return 0;
}
/**************************************************************
	Problem: 1176
	User: 202001060915
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

