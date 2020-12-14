#include <stdio.h>

int main()
{
    int ar[15];
    int sum = 0, p, q;
    for (int i = 0; i < 15; i++)
        scanf("%d", &ar[i]);
    scanf("%d %d", &p, &q);
    if (p > q) {
        int t;
        t = p;
        p = q;
        q = t;
    }
    for (int i = 0; i < 15; i++)
        if (ar[i] >= p && ar[i] <= q)
            sum++;
    printf("%d", sum);
}
/**************************************************************
	Problem: 2292
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

