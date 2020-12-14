#include<stdio.h>
int sum(int a,int b)
{
    int c;
    c=a+b;
    return c;
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
	User: 201801020908
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

