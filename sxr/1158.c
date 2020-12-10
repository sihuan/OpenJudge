#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    printf("Octal Decimal Hexadecimal\n");
    printf("%-6o%-8d%x\n",a,a,a);
    printf("%-6o%-8d%x",b,b,b);
    return 0;
}
/**************************************************************
	Problem: 1158
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

