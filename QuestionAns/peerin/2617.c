#include <stdio.h>

int main(int argc, char *argv[])
{
  int n[2];
  int nn;
  while (scanf("%d", &nn)!=EOF) {
    n[0]=n[1];
    n[1]=nn;
  }
  printf("%d",n[0]);  
  return 0;
}


/**************************************************************
	Problem: 2617
	User: 202211070518
	Language: C
	Result: Accepted
	Time:184 ms
	Memory:748 kb
****************************************************************/

