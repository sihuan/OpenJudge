#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
#include<string.h>
 
int get_array(int a[])
{
    int n=0;
    while(scanf("%d",&a[n])!=EOF)
    {
        n++;
    }
    return n;
}
int put_array(int a[], int n)
{
    int i;
    printf("%d",a[0]);
    for(i=1;i<n;i++)
    {
        printf(" %d",a[i]);
        if(i==n)
            printf("%d\n",a[i]);
    }
}
int sort_array(int a[], int n)
{
    int k,i,j;
    for(j=0;j<n-1;j++)
    {
        for(i=j+1;i<n;i++)
        {
            if(a[j]>a[i])
            {
                k=a[j];
                a[j]=a[i];
                a[i]=k;
            }
        }
 
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
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

