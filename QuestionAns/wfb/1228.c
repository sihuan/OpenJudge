#include<stdio.h>

int gcd(int a, int b)
{
	while(a!=0 && b!=0)
	{
		if(a>b)
			a -= b;
		else
			b -= a;
	}
	return a==0?b:a;
}
int lcm(int a, int b)
{
	int c=gcd(a,b);
	return a/c*b;
}

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    return 0;
}
/**************************************************************
	Problem: 1228
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

