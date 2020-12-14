#include <stdio.h>

int c(int n, int k)
{
    if (k > n)
        return 0;
    if (k == 0)
        return 1;
    if (n == 0)
        return 1;
    return c(n - 1, k - 1) + c(n - 1, k);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", c(n, k));
}
/**************************************************************
	Problem: 2038
	User: 201901060610
	Language: C
	Result: Accepted
	Time:312 ms
	Memory:748 kb
****************************************************************/

