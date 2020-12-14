#include <stdio.h>
int sum (int a, int b)
    {
        return a+b;
    }

int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b) != EOF)
        printf("%d\n", sum(a, b));

    return 0;
}

/**************************************************************
	Problem: 1463
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

