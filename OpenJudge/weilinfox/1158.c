#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);
    printf("Octal Decimal Hexadecimal\n");
    printf("%-6o", a);
    printf("%-8d", a);
    printf("%x\n", a);
    printf("%-6o", b);
    printf("%-8d", b);
    printf("%x", b);
    return 0;
}

/**************************************************************
	Problem: 1158
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

