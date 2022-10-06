#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void readMatrix(int matrix[][100],int r,int c)
{
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d",&matrix[i][j]);
}
void printMatrix(int matrix[][100],int r,int c)
{
    for(int i=0; i<c; i++)
        for(int j=0; j<r; j++)
        {
            if(j==r-1)
                printf("%d\n",matrix[j][i]);
            else
                printf("%d ",matrix[j][i]);
        }
}
int main()
{
    int matrix[100][100];
    int n,i;
    int r,c;
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        scanf("%d%d",&r,&c);
        readMatrix(matrix,r,c);
        printMatrix(matrix,r,c);
        putchar('\n');
    }
    return 0;
}


/**************************************************************
	Problem: 1053
	User: 202001060117
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

