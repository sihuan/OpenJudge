#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 101
int get_array(int a[])
{
    int i=0;
    while(scanf("%d",&a[i])!=EOF)
        i++;
    return i;
}
int put_array(int a[], int n)
{
    int i;
    printf("%d",a[0]);
    for(i=1;i<n;i++)
    {
    printf(" %d",a[i]);
    }
    putchar('\n');
}
int sort_array(int a[], int n)
{
    int i,temp,j;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
//每执行一次就将第一大/第二大。。的数放最右边（n-1-i）
       if(a[j]>a[j+1])
       {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
       }
}

int main()
{
    int array[MAX_SIZE], size;
 
    size = get_array(array);
    sort_array(array, size);
    put_array(array, size);
 
    return 0;
}
/**************************************************************
	Problem: 1376
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

