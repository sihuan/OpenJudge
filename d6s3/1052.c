#include <stdio.h>

int main()
{
    int aj[1000], ao[1000];
    int a, b, c, bj, bo, m, n, i, j, h = 1;
    scanf("%d", &m);
    for (i = 1; i <= m; i++) {
        scanf("%d", &n);
        if (i % 2 == 0) {
            for (c = 0; c < 1000; c++)
                ao[c] = 0;
            for (j = 0; j < n; j++)
                scanf("%d", &ao[j]);
            bo = n;
        } else {
            for (c = 0; c < 1000; c++)
                aj[c] = 0;
            for (j = 0; j < n; j++)
                scanf("%d", &aj[j]);
            bj = n;
        }
        if (bj > bo)
            b = bj;
        else
            b = bo;
        if (h++ != 1) {
            for (j = 0; j < b; j++)
                if (j == 0)
                    printf("%d", aj[j] + ao[j]);
                else
                    printf(" %d", aj[j] + ao[j]);
            printf("\n");
        }
    }
    if (m % 2 == 1) {
        for (j = 0; j < bj; j++)
            if (j == 0)
                printf("%d", aj[j]);
            else
                printf(" %d", aj[j]);
        printf("\n");
    } else {
        for (j = 0; j < bo; j++)
            if (j == 0)
                printf("%d", ao[j]);
            else
                printf(" %d", ao[j]);
        printf("\n");
    }
}
/**************************************************************
	Problem: 1052
	User: 201901060610
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

