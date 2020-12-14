#include <stdio.h>
int get_array(int a[])
{
  int n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
        scanf("%d",&a[i]);
  return n;
}
array_value(int a[], int n, int k)
{
 if(k>=0)
  return a[k];
 else
    return a[n+k];
}

int main()
{
    int size, arr[1000], m, k;
    size = get_array(arr);
    while(scanf("%d", &k) != EOF)
        printf("%d\n", array_value(arr, size, k));
    return 0;
}
/**************************************************************
	Problem: 1611
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

