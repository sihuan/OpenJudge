#include <stdio.h>

void quicksort(int a[],int len) {
  if(len==1)return;
 int pivot=a[0];
  int l=0,r=len-1;
  while (l != r) {
    for(;a[r]>=pivot;--r) if(r==l)goto end;
    a[l]=a[r];
    l++;
    for(;a[l]<pivot;++l) if(l==r)goto end;
    a[r]=a[l];
    --r;
  }
 end:
  a[l]=pivot;
  if(l==0)
    quicksort(a+1,len-1);
  else if(l==len-1)
    quicksort(a,len-1);
  else {
    quicksort(a,len-1-(l-0));
    quicksort(&a[l+1],len-1-(len-1-(l-0)));
  }
}

int max(int a, int b, int c) {
  int ar[] = {a,b,c};
  quicksort(ar,3);
  return ar[2];
}


int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", max(a, b, c));
}

/**************************************************************
	Problem: 2620
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

