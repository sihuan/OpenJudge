#include <stdio.h>
#include <stdlib.h>

char *to_str(unsigned long long n) {
  char *s=malloc(sizeof(char) * 22);
  sprintf(s, "%llu", n);
  return s;
}


int main()
{
    char *s;
    unsigned long long n;
    scanf("%llu", &n);
    s = to_str(n);
    puts(s);
    free(s);
}

/**************************************************************
	Problem: 2519
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

