#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int a,b,c,d;
	int l = 100 - x;
	a = l/20;
	l -= 20*a;
	b = l/10;
	l -= 10*b;
	c = l/5;
	l -= 5*c;
	d = l;
	printf("$20 bills: %d\n",a);
	printf("$10 bills: %d\n",b);
	printf(" $5 bills: %d\n",c);
	printf(" $1 bills: %d\n",d);

	return 0;
}

/**************************************************************
	Problem: 1013
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

