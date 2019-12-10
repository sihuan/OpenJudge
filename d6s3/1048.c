#include <stdio.h>
#include <string.h>

int fz[101][101];

int bud(int n)
{
    int i, j;
    int pre_i, pre_j;
    int k;
    int end = n * n;
    for (k = 1; k <= end; ++k) {
        if (k == 1) {
            i = 0;
            j = n / 2;
        } else if (i == 0 && j < n - 1) {
            i = n - 1;
            ++j;
            if (fz[i][j] && pre_i < n - 1) {
                i = pre_i + 1;
                j = pre_j;
            }
        } else if (j == n - 1 && i > 0) {
            j = 0;
            --i;
            if (fz[i][j] && pre_i < n - 1) {
                i = pre_i + 1;
                j = pre_j;
            }
        } else if (i == 0 && j == n - 1) {
            ++i;
        } else {
            --i;
            ++j;
            if (fz[i][j] && pre_i < n - 1) {
                i = pre_i + 1;
                j = pre_j;
            }
        }
        fz[i][j] = k;
        pre_i = i;
        pre_j = j;
    }
}

int prt(int n)
{
    int i, j;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            if (j)
                printf(" ");
            printf("%d", fz[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, i = 0;
    while (scanf("%d", &n) != EOF) {
        if (i++)
            printf("\n");
        memset(fz, 0, sizeof fz);
        bud(n);
        prt(n);
    }
}
/**************************************************************
	Problem: 1048
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:788 kb
****************************************************************/

