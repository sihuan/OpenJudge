#include <stdio.h>

int swap_array(int a[], int m, int b[], int n){

    int lenMax = m>n?m:n;
    int i;
    for(i = 0;i<lenMax;++i){
        int tmp;
        if(i>=m){
            tmp = b[i];
        }
        else{
            tmp = a[i];
        }
        a[i] = b[i];
        b[i] = tmp;
    }
    return lenMax;
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
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

