#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <malloc.h>

void inputArray(int a[], int n)
{
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}

int* findMax(int a[], int n)
{
    int max,fla;
    max=a[0];
    fla=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            fla=i;
        }
    }
    return &a[fla];
}
int main()
{
    int n, *p;
    scanf("%d", &n);
    int array[n];
    inputArray(array, n);
    p=findMax(array,n);
    printf("%d", *p);
    return 0;
}
/**************************************************************
	Problem: 2542
	User: 202001060117
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

