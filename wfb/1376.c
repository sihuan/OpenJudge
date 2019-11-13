#include <stdio.h>

#define MAX_SIZE 105
#define SWAP(t,x,y) t=x; x=y; y=t;
int get_array(int a[])
{
    int i=0;
    while(scanf("%d",a+i) != EOF)
    {
        ++i;
    }
    return i;
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
int sort_array(int a[], int n)
{
    int i,j;
    int t;
    for(i=0; i<n; ++i)
    {
        for(j=i+1; j<n; ++j)
        {
            if(a[i] > a[j])
            {
                SWAP(t,a[i],a[j]);
            }
        }
    }
    return 0;
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

