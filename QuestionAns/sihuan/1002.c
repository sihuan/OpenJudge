#include <stdio.h>

int main()
{
    int x, y;
    scanf("x = %d, y = %d",&x, &y);
    printf("x + y : %d\nx - y : %d\nx * y : %d\nx / y quotient: %d, remainder: %d\nx ^ 2 : %d\ny ^ 3 : %d\n",x+y, x-y, x*y, x/y, x%y, x*x, y*y*y);
    return 0;
}
/**************************************************************
	Problem: 1002
	User: 201801011012
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

