#include <stdio.h>

int add(int n)
{
    int a, b;
    if (n == 0)
        return 0;
    else {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
        return add(n - 1);
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    add(N);
}

/**************************************************************
	Problem: 2298
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

