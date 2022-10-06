#include <stdio.h>
#include <stdlib.h>
int f(int a,int b,int c)
{
    return (a+b)/c;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", f(a, b, c));
    return 0;
}

/**************************************************************
	Problem: 2515
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

