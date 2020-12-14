#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_SIZE 1001
int get_array(int a[])
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    return n;
}
int put_array(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    if(i==0)
        printf("%d",a[0]);
    else
       printf(",%d",a[i]);
}
int max_value(int a[], int n)
{
    int i;
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
        return max;
}
int max_index(int idx[], int a[], int n)
{
    int i,k=0;
    int max=a[0];
       for(i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
     }
     for(i=0;i<n;i++)
    {
        if(a[i]==max)
            {
                idx[k]=i;
                k++;
            }
     }
     return k;
}

int main()
{
    int array[MAX_SIZE], size;
    int index[MAX_SIZE], idx_size;

    size = get_array(array);
    idx_size = max_index(index, array, size);
    printf("maximum number is %d, ", max_value(array, size));
    printf("whose positions are:");
    put_array(index, idx_size);

    return 0;
}
/**************************************************************
	Problem: 1144
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

