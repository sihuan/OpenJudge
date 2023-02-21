#include <stdio.h>
#include <string.h>

int main()
{
    int n, a = 0;
    while (scanf("%d", &n) != EOF) {
        int ar[n][n];
        memset(ar, 0, sizeof ar);
        int k = 1, i = 0, j = n - 1;
        ar[i][j] = k++;
        while (k <= n * n) {
            while (i + 1 < n && !ar[i + 1][j])
                ar[++i][j] = k++;
            while (j - 1 >= 0 && !ar[i][j - 1])
                ar[i][--j] = k++;
            while (i - 1 >= 0 & !ar[i - 1][j])
                ar[--i][j] = k++;
            while (j + 1 < n && !ar[i][j + 1])
                ar[i][++j] = k++;
        }
        if (a++)
            printf("\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                if (j)
                    printf(" %d", ar[i][j]);
                else
                    printf("%d", ar[i][j]);
            printf("\n");
        }
    }
}

/**************************************************************
	Problem: 1184
	User: 202211070518
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

