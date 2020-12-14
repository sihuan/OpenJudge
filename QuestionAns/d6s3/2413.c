#include <stdio.h>

int main()
{
    int n, i;
    int ar[101];
    scanf("%d", &n);
    for(i=0; i<n ; i++)
        scanf("%d", &ar[i]);
    for(i=n-1; i>=0; i--)
        if (i==n-1)
            printf("%d", ar[i]);
        else
            printf(" %d", ar[i]);
}

/**************************************************************
	Problem: 2413
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

