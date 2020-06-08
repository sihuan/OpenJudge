#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int  b[105];
int get_array(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
int shift_array(int a[], int n)
{
    int i;
    for(i=1;i<n;i++)
        b[i]=a[i];
       b[n]=a[0];
        for(i=1;i<=n;i++)
        a[i-1]=b[i];
}
int put_array(int a[], int n)
{
    int i;
for(i=0;i<n;i++)
    if(i==n-1)
    printf("%d",a[n-1]);
 else
    printf("%d ",a[i]);
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
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

