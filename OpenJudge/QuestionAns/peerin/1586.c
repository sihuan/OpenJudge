#include <stdio.h>
#define MAX_SIZE 100

int get_matrix(int ma[MAX_SIZE][MAX_SIZE],int m,int n){
  for(int i = 0;i < m;++i)
    for(int j = 0;j < n;++j)
      scanf("%d",&ma[i][j]);
  return 0;
}

int put_array(int a[],int n){
  for(int i = 0;i < n;++i){
    if(i == 0)
      printf("%d",a[i]);
    else
      printf(" %d",a[i]);
  }
  printf("\n");
}

int count_sum(int a[],int ma[MAX_SIZE][MAX_SIZE],int m,int n){
  for(int i = 0;i < m;++i){
    int res = 0;
    for(int j = 0;j < n;++j){
      res += ma[i][j];
    }
    a[i] = res;
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
	User: 202211070518
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

