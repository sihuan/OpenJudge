#include <stdio.h>

unsigned long long hanoi(int n)
{
    if(n==1)
        return 1;
    return 2*hanoi(n-1)+1;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%llu", hanoi(n));
}

/**************************************************************
	Problem: 1769
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

