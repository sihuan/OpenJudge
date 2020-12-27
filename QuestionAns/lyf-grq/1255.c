#include <stdio.h>
#include <ctype.h>
#define MAX_SIZE 1001
int getarray(int a[])
{
    int sum;
    scanf("%d",&sum);
    for(int i=0;i<sum;i++)
    {
        scanf("%d",&a[i]);
    }
}
int find(int a[], int n, int val)
{
    for(int j=0;j<n;j++)
    {
        if(a[j]==val)
        {
            return j;
        }
    }
    return -1;
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
	User: 202001061101
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

