#include<stdio.h>
#define MAX_SIZE 101

int get_matrix(int mtx[MAX_SIZE][MAX_SIZE], int m, int n)
{
    int i,j;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&mtx[i][j]);
}

int put_array(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
        if(i==0)
            printf("%d",arr[i]);
        else
            printf(" %d",arr[i]);
    putchar('\n');
}

int count_sum(int arr[], int mtx[MAX_SIZE][MAX_SIZE], int m, int n)
{
    int i,j,s=0;
    for(i=0;i<m;i++){
        s=0;
        for(j=0;j<n;j++)
            s+=mtx[i][j];
        arr[i]=s;
    }
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

