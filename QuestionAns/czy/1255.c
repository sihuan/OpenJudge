#include <stdio.h>
#include <math.h>
#define MAX_SIZE 1009

int getarray(int *arr)
{
    int n,i=0;
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    return n;
}

int find(int *arr,int size,int val)
{
    int i=0,vall=-1;
    for(i=0;i<size;++i)
    {
        if(val==arr[i])
        {
            vall=i;
        return i;
        }
    }
    return vall;
}

int main()
{
    int cases, i;
    int arr[MAX_SIZE], size;
    int val, found = 0;

    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        size  = getarray(arr);
        scanf("%d", &val);
        found = find(arr, size, val);
        if(found == -1)
        {
            printf("NOT FOUND\n");
            continue;
        }
        printf("%d\n", found);
    }
    return 0;
}
/**************************************************************
	Problem: 1255
	User: 201601160202
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

