#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int add_array(int arr[], int a[], int m, int b[], int n)
{
    int t,flag=0;
    if(m<n)
    {
        t=n;
        n=m;
        m=t;
        flag=1;
    }
    for(int i=0;i<n;i++)
        arr[i]=a[i]+b[i];
    for(int i=n;i<m;i++)
    {
        if(flag)
            arr[i]=b[i];
        else
            arr[i]=a[i];
    }
    return m;
}

int get_array(int a[])
{
    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    return n;
}

int put_array(int a[], int n)
{
    int i;
    if(n > 0)
        printf("%d", a[0]);
    for(i = 1; i < n; i++)
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}

int main()
{
    int cases;
    int m, n, k,arr[1000], ar[1000], a[1000];
    scanf("%d", &cases);
    while(cases--)
    {
        m = get_array(a);
        n = get_array(ar);
        k = add_array(arr, ar, n, a, m);
        put_array(arr, k);
    }
    return 0;
}

/**************************************************************
	Problem: 2041
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

