#include <stdio.h>
void MatrixRead(int matrix[][100],int m,int n)
{
    int i,j;
    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
            scanf("%d",&matrix[i][j]);
    }
}
void MatrixAdd(int matrix1[][100],int matrix2[][100],int m,int n)
{
    int i,j;
    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
            matrix1[i][j] += matrix2[i][j];
    }
}
void MatrixPrint(int matrix[][100],int m,int n)
{
    int i,j;
    for(i=0; i<m; ++i)
    {
        for(j=0; j<n; ++j)
        {
            if(j) putchar(' ');
            printf("%d",matrix[i][j]);
        }
        putchar('\n');
    }
}
int main()
{
    int matrix1[100][100];
    int matrix2[100][100];
    int m1,n1;
    int m2,n2;
    while(1)
    {
        scanf("%d%d",&m1,&n1);
        if(m1==0 && n1==0) break;
        MatrixRead(matrix1,m1,n1);
        scanf("%d%d",&m2,&n2);
        if(m2==0 && n2==0) break;
		MatrixRead(matrix2,m2,n2);
        if(m2==m1 && n2==n1)
        {
            MatrixAdd(matrix1,matrix2,m2,n2);
            MatrixPrint(matrix1,m1,n1);
        }
        else
        {
            printf("Not satisfied the definition of matrix addition!\n");
        }
        putchar('\n');
    }
    return 0;
}
/**************************************************************
	Problem: 1054
	User: 201601011420
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:752 kb
****************************************************************/

