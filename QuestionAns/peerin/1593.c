#include <stdio.h>
#define MAX_SIZE 100

int get_matrix(int ma[MAX_SIZE][MAX_SIZE],int m,int n){
  for(int i = 0;i < m;++i)
    for(int j = 0;j < n;++j)
      scanf("%d",&ma[i][j]);
  return 0;
}

int put_array(double a[],int n){
  for(int i = 0;i < n;++i){
    if(i == 0)
      printf("%lg",a[i]);
    else
      printf(" %lg",a[i]);
  }
  printf("\n");
  return 0;
}

double aver(int sum,int n){
  return sum/(n * 1.0);
}

int count_sum(double a[],int ma[MAX_SIZE][MAX_SIZE],int m,int n){
  for(int i = 0;i < n;++i){
    int res = 0;
    for(int j = 0;j < m;++j){
      res += ma[j][i];
    }
    a[i] = aver(res,m);
  }
  return 0;
}

int main()
{
  int i, cases;
  double sum[MAX_SIZE];
  int m, n, matrix[MAX_SIZE][MAX_SIZE];
  scanf("%d", &cases);
  for(i = 1; i <= cases; i++)
    {
      scanf("%d%d", &m, &n);
      get_matrix(matrix, m, n);
      count_sum(sum, matrix, m, n);
      printf("case %d:", i);
      put_array(sum, n);
    }
  return 0;
}

/**************************************************************
	Problem: 1593
	User: 202211070518
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

