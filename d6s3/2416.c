#include <stdio.h>

int print(int m, int n)
{
    int i, j;
    for(i=0; i<n; i++)
        putchar('*');
    putchar('\n');
    for(i=1; i<m-1; i++){
        for(j=0; j<n; j++)
            if(j==0 || j== n-1)
                putchar('*');
            else
                putchar(' ');
        putchar('\n');
    }
    for(i=0; i<n; i++)
        putchar('*');
    putchar('\n');
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    print(m, n);
}

/**************************************************************
	Problem: 2416
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

