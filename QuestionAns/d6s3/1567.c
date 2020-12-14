#include <stdio.h>

int main()
{
    int m, n, i, j, min, t;
    int ar[101];
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
        scanf("%d", &ar[i]);
    for (i = 0; i < m - 1; i++) {
        min = i;
        for (j = i + 1; j < m; j++)
            if (ar[j] < ar[min])
                min = j;
        t = ar[min];
        ar[min] = ar[i];
        ar[i] = t;
    }
    if (m > n)
        for (i = 0, j = m - 1; i < n; i++, j--)
            if (i)
                printf(" %d", ar[j]);
            else
                printf("%d", ar[j]);
    else
        for (i = m - 1, j = 0; i >= 0; i--)
            if (j++)
                printf(" %d", ar[i]);
            else
                printf("%d", ar[i]);
}
/**************************************************************
	Problem: 1567
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

