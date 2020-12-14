#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int arr1[105][105],arr2[105][105];
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF&&x!=0&&y!=0)
    {
        int i,j,m, n;
        for(i=0; i<x; i++)
            for(j=0; j<y; j++)
                scanf("%d",&arr1[i][j]);
        scanf("%d%d",&m,&n);
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                scanf("%d",&arr2[i][j]);
        if(m==0&&n==0)
            break;
        else if(m==x&&n==y)
        {
            for(i=0; i<x; i++)
            {
                for(j=0; j<y; j++)
                {
                    if(j==0)
                        printf("%d",arr1[i][j]+arr2[i][j]);
                    else
                        printf(" %d",arr1[i][j]+arr2[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }
        else
            printf("Not satisfied the definition of matrix addition!\n\n");
    }
}

/**************************************************************
	Problem: 1054
	User: 201901060203
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:760 kb
****************************************************************/

