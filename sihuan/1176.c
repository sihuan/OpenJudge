#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,t[10],n[10][1002];
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d",&t[i]);
        for(j = 0; j < t[i]; j++)
            scanf("%d",&n[i][j]);
    }
    for(i=0; i<m; i++)
    {
        printf("%d",n[i][0]);
        for(j = 1;j < t[i]; j++)
        {
            if (n[i][j]!=n[i][j-1])
            {
                printf(" %d",n[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
/**************************************************************
	Problem: 1176
	User: 201801011012
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

