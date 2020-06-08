#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[101];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1;i>=0;i--)
        if(i==n-1)
        printf("%d",a[i]);
    else
         printf(" %d",a[i]);

    return 0;
}

/**************************************************************
	Problem: 2413
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

