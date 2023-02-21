#include <stdio.h>

int main(int argc, char *argv[])
{
  int n;
  scanf("%d",&n);
  if(n%3==0)
    if(n%5==0)
      if(n%7==0)
	printf("3 5 7");
      else
	printf("3 5");
    else if(n%7==0)
      printf("3 7");
    else
      printf("3");
  else if(n%5==0)
    if(n%7==0)
      printf("5 7");
    else
      printf("5");
  else if(n%7==0)
    printf("7");
  else
    printf("none");

  return 0;
}


/**************************************************************
	Problem: 2511
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

