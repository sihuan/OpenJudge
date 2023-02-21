#include <stdio.h>

void get_array(int a[], int l) {
  for (int i = 0; i<l; ++i) {
    scanf("%d",&a[i]);
  }
}

void put_array(int a[], int n) {
  for (int i = 0; i<n; ++i) {
    if(i==0)
      printf("%d",a[i]);
    else printf(" %d",a[i]);
  }
  printf("\n");
}

void shift_array(int a[], int l) {
  int f=a[0];
  for (int i = 0; i < l-1; ++i) {
    a[i]=a[i+1];
  }
  a[l-1]=f;
}


int main()
{
    int n, a[100];
    scanf("%d", &n);
    get_array(a, n);
    shift_array(a, n);
    put_array(a, n);
    return 0;
}

/**************************************************************
	Problem: 2417
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

