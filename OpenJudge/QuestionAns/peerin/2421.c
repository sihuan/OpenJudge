#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *_a, const void *_b) {
  return *(int*)_a-*(int *)_b;  
}

int main(int argc, char *argv[])
{
  int a[15];
  for (int i = 0; i<15; ++i) {
    scanf("%d",&a[i]);
  }
  qsort(a, 15, sizeof(a[0]), cmp);
  int cnt=1;
  for (int i = 15-2; i >= 0; --i) {
    if(a[i]==a[15-1]) cnt++;
 }
  printf("%d\n",a[15-1-cnt]);
  return 0;
}


/**************************************************************
	Problem: 2421
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

