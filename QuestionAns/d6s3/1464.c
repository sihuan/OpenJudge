#include<stdio.h>
int put_sum(int x, int y)
{
    printf("%d\n",x+y);
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

