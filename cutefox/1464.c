#include <stdio.h>

int put_sum(int a, int b)
{
 printf("%d\n",a+b);
}


int main()
{
    int a, b;

    while(scanf("%d%d", &a, &b) != EOF)
        put_sum(a, b);

    return 0;
}
/**************************************************************
	Problem: 1464
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

