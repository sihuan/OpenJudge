#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mycmp(const void *_a, const void *_b) {
  char *b=(char *)_b;
  char *a=(char *)_a;
  return strcmp(a, b);
}

int main(int argc, char *argv[])
{
  char a[100][51] = {'\0'};
  int i;
  for (i = 0; scanf("%s", a[i]) != EOF; ++i);
  qsort(a, i, sizeof(a[0]), mycmp);
  for (int k = 0; k<i; ++k) {
    printf("%s\n",a[k]);
  }
  return 0;
}

/**************************************************************
	Problem: 2522
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

