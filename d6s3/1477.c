#include <stdio.h>
#define OVERFLOW -1

long long fbnq[100] = { 1, 1 };
int sx, t;

void qfb()
{
    int i = 2;
    long long dq;
    while (1) {
        dq = fbnq[i - 2] + fbnq[i - 1];
        if (dq < 0) {
            sx = i;
            break;
        }
        fbnq[i] = dq;
        i++;
    }
}

long long fibonacci(int n)
{
    if (t == 0) {
        qfb();
        t = 1;
    }
    if (n < sx)
        return fbnq[n];
    else
        return -1;
}

int main()
{
    int n;
    long long fib;
    while(scanf("%d", &n) != EOF)
    {
        fib = fibonacci(n);
        if(fib == OVERFLOW)
            puts("overflow");
        else
            printf("%lld\n", fib);
    }
    return 0;
}
/**************************************************************
	Problem: 1477
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

