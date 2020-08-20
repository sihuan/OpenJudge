#include<stdio.h>
#include<string.h>
#define MAX_SIZE 110

void get_matrix(int matrix[MAX_SIZE][MAX_SIZE],int m,int n){
    int i,j;
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            scanf("%d",&matrix[i][j]);
        }
    }
}
void count_sum(int sum[],int matrix[MAX_SIZE][MAX_SIZE],int m,int n){
    int i,j;
    for(i=0;i<m;++i){
        sum[i]=0;
    }
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            sum[i]+=matrix[i][j];
        }
    }
}
void put_array(int sum[],int n){
    int i;
    for(i=0;i<n;++i){
        printf("%d",sum[i]);
        if(i!=n-1){
            printf(" ");
        }
        else{
            printf("\n");
        }
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

