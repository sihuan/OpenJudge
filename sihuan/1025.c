#include <stdio.h>
int main() {
  int t;
  while (scanf("%d", &t) != EOF) {
    if (t < 0 || t > 100) {
      printf("Error\n");
      continue;
    } else {
      t /= 10;
      switch (t) {
        case 10:
          printf("Excellent\n");
          break;
        case 9:
          printf("Excellent\n");
          break;
        case 8:
          printf("Good\n");
          break;
        case 7:
          printf("Average\n");
          break;
        case 6:
          printf("Pass\n");
          break;
        default:
          printf("Failing\n");
          break;
      }
    }
  }
  return 0;
}
/**************************************************************
	Problem: 1025
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

