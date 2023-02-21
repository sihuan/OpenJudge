#include <stdio.h>

int main(int argc, char *argv[])
{
  int a[100];
  int n;
  scanf("%d",&n);
  int i;
  for (i=0; i<n; ++i) {
    scanf("%d",&a[i]);
  }
  for (i = n-1; i >= 0; --i) {
    if(i==n-1)
      printf("%d",a[i]);
    else
      printf(" %d",a[i]);
  }
  return 0;
}


/**************************************************************
	Problem: 2413
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

