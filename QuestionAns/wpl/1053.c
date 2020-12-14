#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[102][102],b,n,m,k,i,j;
    scanf("%d",&b);
    for(k=0;k<b;k++)
    {
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&a[j][i]);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n-1;j++)
                printf("%d ",a[i][j]);
            printf("%d",a[i][j]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

/**************************************************************
	Problem: 1053
	User: 201901060819
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

