#include <stdio.h>
#define MAX_SIZE 200


int get_matrix(int mtx[200][200], int m, int n)
{
    int i,j;
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%d",&mtx[i][j]);
        }
    }
}

int put_array(int arr[], int n)
{
    int i;
    int flag=0;
    for(i=0;i<n;++i)
    {
        if(flag==0) printf("%d",arr[i]);
        else printf(" %d",arr[i]);
        flag=1;
    }
    printf("\n");
}

int count_sum(int arr[], int mtx[200][200], int m, int n)
{
    int i,j,k=0;
    for(i=0;i<m;++i)
    {
        int num=0;
        for(j=0;j<n;++j)
        {
            num=num+mtx[i][j];
        }
        arr[i]=num;
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:828 kb
****************************************************************/

