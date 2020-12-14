#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    int m,n;
    int i,j;
    int a[100][100],b[100][100];
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        if(m==0&&n==0)
            break;
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
                scanf("%d",&a[i][j]);
        }
        scanf("%d %d",&x,&y);
        if(x==0&&y==0)
            break;
        for(i=0; i<x; i++)
        {
            for(j=0; j<y; j++)

                scanf("%d",&b[i][j]);
        }
        if(m==x&&n==y)
        {
            for(i=0; i<x; i++)
            {
                for(j=0; j<y; j++)
                {
                    if(j<y-1)
                        printf("%d ",a[i][j]+b[i][j]);
                    else
                        printf("%d",a[i][j]+b[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }
        if(m!=x||n!=y)
            printf("Not satisfied the definition of matrix addition!\n\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1054
	User: 201901060819
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

