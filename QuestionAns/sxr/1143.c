#include <stdio.h>
#include <stdlib.h>

int print_graphic(int n, char c)
{
    int i,j;
    for(j=1; j<=n; j++)
    {
        for(i=1; i<=(n-j); i++)
            printf(" ");
        for(i=1; i<=2*j-1; i++)
            printf("%c",c);
        printf("\n");
    }
    return 1;
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
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

