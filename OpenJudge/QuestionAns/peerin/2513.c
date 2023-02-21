#include <stdio.h>

#define SWAP(a,b,tmp)\
  (tmp)=(a);\
  (a)=(b);  \
  (b)=(tmp);

int main(int argc, char *argv[])
{
  int a[15];  
  for (int i = 0; i<15; ++i) {
    scanf("%d",&a[i]);
  }
  int i,j;
  while (scanf("%d%d", &i, &j) != EOF) {
    int tmp;
    SWAP(a[i],a[j],tmp);
  }
  for (int i = 0; i<15; ++i) {
    if(i==0)
      printf("%d",a[i]);
    else
      printf(" %d",a[i]);
  }
  printf("\n");
  return 0;
}


/**************************************************************
	Problem: 2513
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

