#include <stdio.h>

int gcd(int m,int n)
{
	if(m%n==0) return n;
	else return gcd(n,m%n);
}
int lcm(int a,int b)
{
	int x = gcd(a,b);
	return a/x*b;
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d\n",gcd(a,b),lcm(a,b));
	return 0;
}

/**************************************************************
	Problem: 1298
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

