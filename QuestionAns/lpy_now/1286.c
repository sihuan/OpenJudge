#include<stdio.h>
#define MAX_SIZE 110

void get_matrix(int matrix[MAX_SIZE][MAX_SIZE],int m,int n){
    int i,j;
    for(i=1;i<=m;++i){
        for(j=1;j<=n;++j){
            scanf("%d",&matrix[i][j]);
        }
    }
}
void mul_matrix(int product[MAX_SIZE][MAX_SIZE],int matrix1[MAX_SIZE][MAX_SIZE],int matrix2[MAX_SIZE][MAX_SIZE],int m,int n,int q){
    int i,j,k,r;
    for(i=1;i<=m;++i){
        for(j=1;j<=q;++j){
            product[i][j]=0;
        }
    }
    for(i=1;i<=m;++i){
        for(j=1;j<=q;++j){
            for(k=1;k<=n;++k){
                product[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}
void put_matrix(int product[MAX_SIZE][MAX_SIZE],int m,int q){
    int i,j;
    for(i=1;i<=m;++i){
        for(j=1;j<=q;++j){
            if(j!=q){
                printf("%d ",product[i][j]);
            }
            if(j==q){
                printf("%d",product[i][j]);
            }
        }
        if(i!=m){
            printf("\n");
        }
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:816 kb
****************************************************************/

