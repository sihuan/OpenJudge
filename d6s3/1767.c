#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, n, j, a, max;
    int ar[10001];
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        memset(ar, 0, sizeof ar);
        for (j = 0; j < n; j++) {
            scanf("%d", &a);
            ar[a] += 1;
        }
        max = 0;
        for (j = 0; j < 10001; j++) {
            if (ar[j] > max)
                max = ar[j];
        }
        printf("%d", max);
        for (j = 0; j < 10001; j++) {
            if (ar[j] == max)
                printf(" %d", j);
        }
        printf("\n");
    }
}
/**************************************************************
	Problem: 1767
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

