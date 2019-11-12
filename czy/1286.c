#include <stdio.h>
#include <math.h>
#define MAX_SIZE 109

int get_matrix(int a[][109],int m,int n)
{
    int i=0,j=0;
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void mul_matrix(int product[][109],int  a[][109], int temp[][109],int m,int n,int q)
{
    int i=0,j=0,kl=0;
for(i=0;i<m;++i)
                {
                    for(j=0;j<q;++j)
                    {
                        int sum=0;
                        for(kl=0;kl<n;++kl)
                        {
                            sum=sum+a[i][kl]*temp[kl][j];
                        }
                        product[i][j]=sum;
                    }
                }
}

void put_matrix(int product[][109],int m,int q)
{
    int i=0,j=0;
    for(i=0;i<m;++i)
    {
        for(j=0;j<q;++j)
        {
            printf("%d",product[i][j]);
            if(j<q-1) printf(" ");
        }
        printf("\n");
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:816 kb
****************************************************************/

