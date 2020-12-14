#include <stdio.h>
#include <string.h>
int main() {
  char password[22] = {0};
  char input[22];
  scanf("%s", password);
  int n = 0;
  while (scanf("%s", input) != EOF) {
    if (strcmp(password, input) == 0 && n < 5) {
      printf("Welcome!\n");
      break;
    } else {
      n++;
      if (n < 6) {
        printf("Wrong!\n");
      } else {
        printf("Out of limited!\n");
      }
    }
  }
}

/**************************************************************
	Problem: 1093
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

