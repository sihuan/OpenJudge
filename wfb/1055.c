#include <stdio.h>

void matrixRead(int matrix[][100],int m,int n)
{
	int i,j;
	for(i=0; i<m; ++i)
		for(j=0; j<n; ++j)
			scanf("%d",&matrix[i][j]);
}
void matrixMul(int matrix1[][100],int matrix2[][100],int m,int s,int n)
{
	int matrix3[100][100] ={0,};
	int i,j,k;
	for(i=0; i<m; ++i)
	{
		for(j=0; j<n; ++j)
		{
			for(k=0; k<s; ++k)
			{
				matrix3[i][j] += matrix1[i][k]*matrix2[k][j];
			}
		}
	}
	for(i=0; i<m; ++i)
	{
		for(j=0; j<n; ++j)
			matrix1[i][j] = matrix3[i][j];
	}
}
void matrixPrint(int matrix[][100],int m,int n)
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
	putchar('\n');
}
int main()
{
//    freopen("output.txt","w",stdout);
	int matrix1[100][100];
	int matrix2[100][100];
	int m,n;
	int pre_m,pre_n;
	scanf("%d%d",&m,&n);
	pre_m = m,pre_n = n;
	matrixRead(matrix1,m,n);
	while(scanf("%d%d",&m,&n))
	{
		if(m==0 && n==0) break;

		if(pre_n == m)
		{
			matrixRead(matrix2,m,n);
			matrixMul(matrix1,matrix2,pre_m,m,n);
			m = pre_m;
			matrixPrint(matrix1,m,n);
		}
		else
		{
			matrixRead(matrix1,m,n);
			printf("Not satisfied the definition of matrix multiplication!\n\n");
		}
		pre_m = m; pre_n = n;
	}

	return 0;
}

/**************************************************************
	Problem: 1055
	User: 201601011420
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:788 kb
****************************************************************/

