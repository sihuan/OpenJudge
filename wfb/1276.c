#include <stdio.h>
int headRowPrint(int n)
{
	int i;
	for(i=0; i<n; ++i)
		putchar('*');
	putchar('\n');
}
int rowPrint(int n,int m)
{
	int i;
	for(i=0; i<n/2; ++i)
		putchar('*');
	for(i=0; i<m; ++i)
		putchar(' ');
	for(i=0; i<n/2; ++i)
		putchar('*');
	putchar('\n');
}
int print_graphic(int n)
{
	headRowPrint(n);
	int i,j;
	for(i=n-1,j=1; i>=2; i-=2,j+=2)
		rowPrint(i,j);
	for(i+=4,j-=4; i<n; i+=2,j-=2)
		rowPrint(i,j);
	headRowPrint(n);
}

int main()
{
    int num;
    scanf("%d", &num);
    print_graphic(num);
    return 0;
}
/**************************************************************
	Problem: 1276
	User: 201601011420
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:748 kb
****************************************************************/

