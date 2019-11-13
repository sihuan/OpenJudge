#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 105

int get_matrix(int mtx[][MAX_SIZE], int m, int n)
{
    int i,j;
    for(i=0; i<m; ++i)
        for(j=0; j<n; ++j)
            scanf("%d",&mtx[i][j]);

    return 0;
}
int put_array(int arr[], int n)
{
    int i;
    for(i=0; i<n; ++i)
    {
        if(i) putchar(' ');
        printf("%d",arr[i]);
    }
    putchar('\n');
    return 0;
}
int count_sum(int arr[], int mtx[][MAX_SIZE], int m, int n)
{
    int i,j;
    int sum;
    for(i=0; i<m; ++i)
    {
        sum = 0;
        for(j=0; j<n; ++j)
            sum += mtx[i][j];
        arr[i] = sum;
    }
    return 0;
}

int main()
{
    int i, cases, sum[MAX_SIZE];
    int m, n, matrix[MAX_SIZE][MAX_SIZE];
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%d%d", &m, &n);
        get_matrix(matrix, m, n);
        count_sum(sum, matrix, m, n);
        printf("case %d:", i);
        put_array(sum, m);
    }
    return 0;
}
/**************************************************************
	Problem: 1586
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

