#include <stdio.h>

int count_array(int a[],int n,int elt) {
  int cnt=0;
  for (int i = 0; i < n; ++i) {
    if(a[i]==elt) cnt++;
  }
  return cnt;
}


int main()
{
    int a[100], i, n, val, cnt;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &val);
    cnt = count_array(a, n, val);
    printf("%d\n", cnt);
}

/**************************************************************
	Problem: 2622
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

