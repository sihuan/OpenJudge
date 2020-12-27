#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int i;
	int a[101];
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
	if(i==1)
	printf("%d",a[1]);
	else
	printf(" %d",a[i]);
	}
    return 0;
}

/**************************************************************
	Problem: 2413
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

