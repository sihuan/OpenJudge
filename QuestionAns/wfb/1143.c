#include<stdio.h>

int print_graphic(int n, char c)
{
	int i=0,j,k;
	while(n--)
	{
	    ++i;
		for(j=0; j<n; ++j)
			putchar(' ');
		for(k=1; k<=2*i-1; ++k)
			putchar(c);
		putchar('\n');
	}

	return 0;
}

int main()
{
    char c;
    int num;
    scanf("%d %c", &num, &c);
    print_graphic(num, c);
    return 0;
}

/**************************************************************
	Problem: 1143
	User: 201601011420
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

