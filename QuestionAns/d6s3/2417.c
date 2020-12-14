#include <stdio.h>

int get_array(int a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
}

int shift_array(int a[], int n)
{

}

int put_array(int a[], int n)
{
    int i;
    for(i=1; i<n; i++)
        if(i==1)
            printf("%d", a[i]);
        else
            printf(" %d", a[i]);
    if(n==1)
        printf("%d", a[0]);
    else
        printf(" %d", a[0]);
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

