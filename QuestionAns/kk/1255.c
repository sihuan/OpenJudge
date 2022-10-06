#include <stdio.h>
#define MAX_SIZE 1001
int getarray(int a[])
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    return n;
}
int find(int a[], int n, int val)
{
    if(n==0)
        return -1;
    for(int i=0;i<n;i++)
        if(a[i]==val)
            return i;
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
	User: 202001060117
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

