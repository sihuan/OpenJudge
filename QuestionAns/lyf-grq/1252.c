#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int a,t;
  scanf("%d",&a);
  t=a;
  printf("  a   : %d\n",a);
  a=t;
  printf("--a   : %d\n",--a);
   a=t;
  printf("  a-- : %d\n",a--);
   a=t;
  printf("  a++ : %d\n",a++);
   a=t;
  printf("++a   : %d\n",++a);
}

/**************************************************************
	Problem: 1252
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

