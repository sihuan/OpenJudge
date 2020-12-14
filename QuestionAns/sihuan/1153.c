#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 1001
int get_array(int a[])
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    return n;
}
int put_array(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(i!=0)
            printf(" ");
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}
int reverse_array(int a[], int n)
{
    int i,t;
    for(i=0;i<n/2;i++)
    {
        t=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=t;
    }
    return 0;
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
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

