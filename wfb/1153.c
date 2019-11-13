#include <stdio.h>

#define MAX_SIZE 1005
#define SWAP(t,x,y) t=x; x=y; y=t;
int get_array(int a[])
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; ++i)
    {
        scanf("%d",a+i);
    }
    return n;
}
int put_array(int a[], int n)
{
    int i;
    int cnt = 0;
    for(i=0; i<n; ++i)
    {
        if(cnt++)
            putchar(' ');
        printf("%d",a[i]);
    }
    putchar('\n');
}
int reverse_array(int a[], int n)
{
    int i;
    int t;
    for(i=0; 2*i<n; ++i)
    {
        SWAP(t,a[i],a[n-i-1]);
    }
}


int main()
{
    int cases, i;
    int array[MAX_SIZE], size;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size = get_array(array);
        reverse_array(array, size);
        printf("case %d:", i);
        put_array(array, size);
    }
    return 0;
}
/**************************************************************
	Problem: 1153
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

