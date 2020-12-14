#include <stdio.h>

int fac(int n)
{
	if(n == 0 || n==1) return 1;
	else return n*fac(n-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fac(n));
}

/**************************************************************
	Problem: 1384
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

