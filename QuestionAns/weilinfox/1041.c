#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
	int max (int, int);
	int min (int, int);
	int a, b;
	int i, j;
	
	while (scanf("%d%d", &a, &b)==2) {
		if (a!=0 && b!=0) {
			printf("%d %d\n", max(a, b), min(a,b));
		} else {
			int t;
			if (a>b) {
			t=a;
			a=b;
			b=t;
			}
			printf("%d %d\n", b, a);
		}
		
	}
	
	return 0;
}

int max (int a, int b)
{
	int t;
	while (a!=0 && b!=0) {
		if (a>b) {
			t=a;
			a=b;
			b=t;
		}
		b-=(b/a*a);
	}
	
	return a;
}

int min (int a, int b)
{
	int x;
	x=max(a,b);
	a/=x;
	b/=x;
	return x*a*b;
	
}
/**************************************************************
	Problem: 1041
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

