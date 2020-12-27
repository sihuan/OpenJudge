#include <stdio.h>
#include <string.h>
#define max 105
int digui(int n)
{
	int d;
	if(n<=0)
	return 1;
	d=n*digui(n-1);
	return d;
	
}

int main()
{
    int n,c;
    scanf("%d",&n);
    printf("%d",digui(n));
    return 0;
}
 

 

/**************************************************************
	Problem: 1384
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

