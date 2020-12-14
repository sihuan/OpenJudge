#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int s[m][n];
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            scanf("%d",&s[i][j]);
        }
        getchar();
    }
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-1;j++)
        {
            if(j!=m-1)
                printf("%d ",s[j][i]);
            else
                printf("%d\n",s[j][i]);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1821
	User: 201801020908
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

