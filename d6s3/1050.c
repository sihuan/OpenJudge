#include <stdio.h>

int main()
{
    int ar[1000] = { 0 };
    int n, i, a, j = 0, h, m;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &a);
            ar[i] += a;
        }
        if (n > m)
            m = n;
        j++;
        if (j == 2) {
            for (i = 0; i < m; i++)
                if (i == 0)
                    printf("%d", ar[i]);
                else
                    printf(" %d", ar[i]);
            printf("\n");
            j = 0;
            m = 0;
            for (h = 0; h < 1000; h++)
                ar[h] = 0;
        }
    }
    if (j == 1) {
        for (i = 0; i < n; i++)
            if (i == 0)
                printf("%d", ar[i]);
            else
                printf(" %d", ar[i]);
        printf("\n");
    }
}
/**************************************************************
	Problem: 1050
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

