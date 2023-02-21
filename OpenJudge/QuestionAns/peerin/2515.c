#include <stdio.h>

#define f(a,b,c)\
  ((a)+(b))/(c)


int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", f(a, b, c));
    return 0;
}

/**************************************************************
	Problem: 2515
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

