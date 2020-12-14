#include <stdio.h>
#include <string.h>
int main() {
  char ch;
  scanf("%c", &ch);

  if ('0' <= ch && ch <= '9') {
    printf("Digit");
  } else if ('a' <= ch && ch <= 'z') {
    printf("Low");
  } else if ('A' <= ch && ch <= 'Z') {
    printf("Cap");
  } else {
    printf("Other");
  }
}

/**************************************************************
	Problem: 1259
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

