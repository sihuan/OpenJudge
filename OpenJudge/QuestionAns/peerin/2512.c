#include <stdio.h>

int main(int argc, char *argv[])
{
  int n;
  int max,min;
  scanf("%d",&n);
  max=min=n;
  while (scanf("%d", &n) != EOF) {
    if(n>max) max=n;
    if(n<min) min=n;
  }
  printf("The maximum stretch is %d.\n",max-min);
  return 0;
}


/**************************************************************
	Problem: 2512
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

