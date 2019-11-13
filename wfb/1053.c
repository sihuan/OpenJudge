#include <stdio.h>
void readMatrix(int matrix[][100],int m,int n)
{
	int i,j;
	for(i=0; i<m; ++i)
	{
		for(j=0; j<n; ++j)
			scanf("%d",&matrix[i][j]);
	}
}
void printMatrix(int matrix[][100],int m,int n)
{
	int i,j;
	for(j=0; j<n; ++j)
	{
		for(i=0; i<m; ++i)
		{
			if(i) putchar(' ');
			printf("%d",matrix[i][j]);
		}
		putchar('\n');
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

