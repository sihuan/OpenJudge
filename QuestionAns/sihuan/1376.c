#include <stdio.h>
#define MAX_SIZE 100

int get_array(int a[]) {
  int i = 0;
  while (scanf("%d", &a[i]) != EOF) {
    i++;
  }
  return i;
}

int put_array(int a[], int n) {
  printf("%d", a[0]);
  for (int i = 1; i < n; i++) {
    printf(" %d", a[i]);
  }
  return 0;
}

int sort_array(int a[], int n) {
  int temp;
  for (int i = 0; i < n - 1; i++)
    for (int j = 0; j < n - 1 - i; j++)
      if (a[j] > a[j + 1]) {
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
      }
}

int main()
{
    int array[MAX_SIZE], size;
 
    size = get_array(array);
    sort_array(array, size);
    put_array(array, size);
 
    return 0;
}
/**************************************************************
	Problem: 1376
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

