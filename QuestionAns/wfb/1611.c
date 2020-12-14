#include <stdio.h>

#define MAX_STR_LEN 1005
int get_array(int a[])
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; ++i)
    {
        scanf("%d",&a[i]);
    }
    return n;
}
int array_value(int a[], int n, int k)
{
    if(k<0) return a[n+k];
    else return a[k];
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

