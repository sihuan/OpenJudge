# include <stdio.h>
void rowPrint(int pre,int n)
{
	int i;
	int last = n-1-pre;
	for(i=0; i<pre; ++i)
	{
		if(i) putchar(' ');
		putchar('0');
	}
	if(i) putchar(' ');
	putchar('1');
	for(i=0; i<last; ++i)
	{
		putchar(' ');
		putchar('0');
	}
	putchar('\n');
}
void MatrixPrint(int n)
{
	int i;
	for(i=0; i<n; ++i)
	{
		rowPrint(i,n);
	}
}
int main()
{
	int n;
	while(scanf("%d",&n) != EOF)
    {
        MatrixPrint(n);
        putchar('\n');
    }

	return 0;
}

/**************************************************************
	Problem: 1506
	User: 201601011420
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:748 kb
****************************************************************/

