#include<stdio.h>

int swap_array(int ar[],int n,int arr[],int m){
    m=m>n?m:n;
    int i;
    for(i=0;i<m;++i){
        int temp=arr[i];
        arr[i]=ar[i],ar[i]=temp;
    }
    return 0;
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
    int m, n, k, arr[1000], ar[1000];
    scanf("%d", &cases);
    while(cases--)
    {
        m = get_array(ar);
        n = get_array(arr);
        k = swap_array(ar, m, arr, n);
        put_array(ar, n);
        put_array(arr, m);
    }
    return 0;
}

/**************************************************************
	Problem: 2296
	User: 201901061011
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

