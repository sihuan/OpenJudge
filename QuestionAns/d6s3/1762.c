#include <stdio.h>

int main()
{
    int a, s = 0;
    while (scanf("%d", &a) != EOF)
        s += a;
    if (s >= 4899)
        printf("%d.00", (int)(s * 0.8));
    else if (s >= 2499)
        printf("%d.00", (int)(s * 0.85));
    else if (s >= 899)
        printf("%d.00", (int)(s * 0.9));
    else if (s >= 399)
        printf("%d.00", (int)(s * 0.95));
    else
        printf("%d.00", s);
}
/**************************************************************
	Problem: 1762
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

