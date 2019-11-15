#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int a, b;
    scanf("x = %d, y = %d", &a, &b);
    printf("x + y : %d\n", a+b);
    printf("x - y : %d\n", a-b);
    printf("x * y : %d\n", a*b);
    printf("x / y quotient: %d, remainder: %d\n", a/b, a%b);
    printf("x ^ 2 : %d\n", (int)pow(a, 2));
    printf("y ^ 3 : %d\n", (int)pow(b, 3));

    return 0;
}

/**************************************************************
	Problem: 1002
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

