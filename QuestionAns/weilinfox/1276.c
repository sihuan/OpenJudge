#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int print_graphic(int n)
{
    int i, j;
    for (i=0; i< (n%2==0?n+1:n); i++)
        putchar('*');
    putchar('\n');
    for (i=0; i<n/2; i++) {
        for (j=0; j<n/2-i; j++)
            putchar('*');
        for (j=0; j<(i+1)*2-1; j++)
            putchar(' ');
        for (j=0; j<n/2-i; j++)
            putchar('*');

        putchar('\n');
    }
    for (i=n/2-2; i>=0; i--) {
        for (j=0; j<n/2-i; j++)
            putchar('*');
        for (j=0; j<(i+1)*2-1; j++)
            putchar(' ');
        for (j=0; j<n/2-i; j++)
            putchar('*');

        putchar('\n');
    }
    for (i=0; i<(n%2==0?n+1:n); i++)
        putchar('*');
    putchar('\n');
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
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

