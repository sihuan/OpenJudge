#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, d;
    char c;
    scanf("%d %c %d =",&a, &c, &b);
    c=='+' ? (d=a+b) : (d=a-b);
    printf("%d %c %d = %d",a, c, b, d);
    return 0;
}

/**************************************************************
	Problem: 1905
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

