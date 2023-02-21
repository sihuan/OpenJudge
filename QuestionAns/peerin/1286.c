#include <stdio.h>
#define MAX_SIZE 101

int get_matrix(int ma[][MAX_SIZE], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &ma[i][j]);
}

int put_matrix(int ma[][MAX_SIZE], int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            if (j == 0)
                printf("%d", ma[i][j]);
            else
                printf(" %d", ma[i][j]);
        printf("\n");
    }
}

int mul_matrix(int pr[][MAX_SIZE], int m1[][MAX_SIZE], int m2[][MAX_SIZE], int m, int n, int q)
{
    int i, j, k;
    for (i = 0; i < m; i++)
        for (j = 0; j < q; j++) {
            pr[i][j] = 0;
            for (k = 0; k < n; k++)
                pr[i][j] += (m1[i][k] * m2[k][j]);
        }
}


int main()
{
    int m, n, q;
    int product[MAX_SIZE][MAX_SIZE];
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];
 
    scanf("%d%d%d", &m, &n, &q);
    get_matrix(matrix1, m, n);
    get_matrix(matrix2, n, q);
    mul_matrix(product, matrix1, matrix2, m, n, q);
    put_matrix(product, m, q);
 
    return 0;
}
/**************************************************************
	Problem: 1286
	User: 202211070518
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:796 kb
****************************************************************/

