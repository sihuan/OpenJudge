#include <stdio.h>

int main(int argc, char *argv[])
{
  char *s[] = {NULL,"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
  int n;
  scanf("%d",&n);
  printf("%s",n>=1&&n<=7?s[n]:"input error!");
  return 0;
}


/**************************************************************
	Problem: 2616
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

