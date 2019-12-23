#include <stdio.h>

int qhw(int n, int m)
{
    if(n==1)
        return 0;
    return (qhw(n-1, m) + m) % n;
}
int main()
{
    int m, n;
    while(scanf("%d %d", &m, &n) != EOF)
        printf("%d\n", qhw(m, n) + 1);
}

/**************************************************************
	Problem: 1510
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

