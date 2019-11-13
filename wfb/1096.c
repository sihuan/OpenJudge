#include<stdio.h>
void PrintF(int n);
void PrintZ(int n);
int main()
{
	int n;
	while(scanf("%d",&n) && n!=0)
	{
		if(n%2==0) PrintZ(n);
		else PrintF(n);
		putchar('\n');
	}

	return 0;
}
void PrintF(int n)
{
	int i,j,k;
	for(i=n; i>0; --i)
	{
		for(j=n; j>i; --j)
			putchar(' ');
		for(k=1; k<=2*i-1; ++k)
			putchar('+');
		putchar('\n');
	}
}
void PrintZ(int n)
{
	int i,j,k;
	for(i=1; i<=n; ++i)
	{
		for(j=n; j>i; --j)
			putchar(' ');
		for(k=1; k<=2*i-1; ++k)
			putchar('+');
		putchar('\n');
	}
}

/**************************************************************
	Problem: 1096
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

