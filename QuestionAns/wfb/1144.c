#include <stdio.h>
#include <limits.h>
#define MAX_SIZE 10005
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
    int cnt = 0;
    int i;
    for(i=0; i<n; ++i)
    {
        if(cnt++)
            putchar(',');
        printf("%d",a[i]);
    }
    return 0;
}
int max_value(int a[], int n)
{
    int max = INT_MIN;
    int i;
    for(i=0; i<n; ++i)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}
int max_index(int idx[], int a[], int n)
{
    int cnt=1;
    int i;
    int max = INT_MIN;
    for(i=0; i<n; ++i)
    {
        if(a[i] > max)
        {
            cnt = 1;
            max = a[i];
            idx[0] = i;
        }
        else if(a[i] == max)
        {
            idx[cnt] = i;
            ++cnt;
        }
    }
    return cnt;
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

