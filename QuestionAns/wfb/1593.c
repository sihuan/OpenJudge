#include <stdio.h>
#define MAX_STR_LEN 105

#define SWAP(a,b,t) t=a; a=b; b=t;

void ReadMatrix(int ma[][MAX_STR_LEN],int m,int n)
{
    int i,j;
    for(i=0; i<m; ++i)
        for(j=0; j<n; ++j)
            scanf("%d",&ma[i][j]);
}
void GetAverage(int ma[][MAX_STR_LEN],int m,int n)
{
    int i,j;
    int sum;
    for(j=0; j<n; ++j)
    {
        sum = 0;
        for(i=0; i<m; ++i)
        {
            sum += ma[i][j];
        }
        if(j) putchar(' ');
        printf("%lg",sum*1.0/m);
    }
    putchar('\n');
}
int main()
{
    int matrix[MAX_STR_LEN][MAX_STR_LEN];
    int n,r,c;
    scanf("%d",&n);
    int i;
    for(i=1; i<=n; ++i)
    {
        scanf("%d%d",&r,&c);
        ReadMatrix(matrix,r,c);
        printf("case %d:",i);
        GetAverage(matrix,r,c);
    }
    return 0;
}

/**************************************************************
	Problem: 1593
	User: 201601011420
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

