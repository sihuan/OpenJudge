#include <stdio.h>
#define MAX_SIZE 101

int get_matrix(int mtx[][MAX_SIZE], int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &mtx[i][j]);
    }
  }
}

int put_array(double arr[], int n) {
  printf("%lg", arr[0]);
  for (int i = 1; i < n; i++) {
    printf(" %lg", arr[i]);
  }
  printf("\n");
}

int count_average(double arr[], int mtx[][MAX_SIZE], int m, int n) {
  int sum;
  for (int i = 0; i < n; i++) {
    sum = 0;
    for (int j = 0; j < m; j++) {
      sum += mtx[j][i];
    }
    arr[i] = ((double)sum) / m;
  }
}

int main()
{
    int i, cases;
    double average[MAX_SIZE];
    int m, n, matrix[MAX_SIZE][MAX_SIZE];
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%d%d", &m, &n);
        get_matrix(matrix, m, n);
        count_average(average, matrix, m, n);
        printf("case %d:", i);
        put_array(average, n);
    }
    return 0;
}
/**************************************************************
	Problem: 1467
	User: 201801011012
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

