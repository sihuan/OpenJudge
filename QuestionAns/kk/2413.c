#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=n-1;i>=0;i--)
    {
        if(i==0)
            printf("%d",arr[i]);
        else
            printf("%d ",arr[i]);
    }
}

/**************************************************************
	Problem: 2413
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

