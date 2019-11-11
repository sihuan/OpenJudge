#include <stdio.h>
#define MAX_SIZE 101

int get_matrix(int mtx[][MAX_SIZE], int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &mtx[i][j]);
    }
  }
}

int put_array(int arr[], int n) {
  printf("%d", arr[0]);
  for (int i = 1; i < n; i++) {
    printf(" %d", arr[i]);
  }
  printf("\n");
}

int count_sum(int arr[], int mtx[][MAX_SIZE], int m, int n) {
  for (int i = 0; i < m; i++) {
    arr[i] = 0;
    for (int j = 0; j < n; j++) {
      arr[i] += mtx[i][j];
    }
  }
}
//以上 submit

int main() {
  int i, cases, sum[MAX_SIZE];
  int m, n, matrix[MAX_SIZE][MAX_SIZE];
  scanf("%d", &cases);
  for (i = 1; i <= cases; i++) {
    scanf("%d%d", &m, &n);
    get_matrix(matrix, m, n);
    count_sum(sum, matrix, m, n);
    printf("case %d:", i);
    put_array(sum, m);
  }
  return 0;
}
/*
AC
*/