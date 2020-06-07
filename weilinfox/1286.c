#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

#define MAX_SIZE 101

int get_matrix(int ma[MAX_SIZE][MAX_SIZE], int m, int n)
{
    int i, j;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &ma[i][j]);
        }
    }
    return 0;
}

int put_matrix(int ma[MAX_SIZE][MAX_SIZE], int m, int n)
{
    int i, j;
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            if (j)
                printf(" %d", ma[i][j]);
            else
                printf("%d", ma[i][j]);
        }
        putchar('\n');
    }
    return 0;
}

int mul_matrix(int pr[MAX_SIZE][MAX_SIZE], int m1[MAX_SIZE][MAX_SIZE], int m2[MAX_SIZE][MAX_SIZE], int m, int n, int q)
{
    int i, j;
    for (i=0; i<m; i++) {
        for (j=0; j<q; j++) {
            int sum=0;
            int k;
            for (k=0; k<n; k++) {
                sum+=m1[i][k]*m2[k][j];
            }
            pr[i][j]=sum;
        }
    }
    return 0;
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
	User: 201901060401
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:796 kb
****************************************************************/

