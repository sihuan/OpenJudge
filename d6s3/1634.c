#include <stdio.h>
#include <string.h>

int main()
{
    int m, n, i, j, a, b, f = 0;
    char cz[5];
    int ar[101][101], ht[101], lt;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &ar[i][j]);
    while (scanf("%s %d %d", cz, &a, &b) != EOF) {
        if (f)
            printf("\n");
        f++;
        if (!strcmp(cz, "line")) {
            memcpy(ht, ar[a], sizeof ht);
            memcpy(ar[a], ar[b], sizeof ht);
            memcpy(ar[b], ht, sizeof ht);
        } else if (!strcmp(cz, "row")) {
            for (int i = 0; i < m; i++) {
                lt = ar[i][a];
                ar[i][a] = ar[i][b];
                ar[i][b] = lt;
            }
        }
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                if (j)
                    printf(" %d", ar[i][j]);
                else
                    printf("%d", ar[i][j]);
            }
            printf("\n");
        }
    }
}
/**************************************************************
	Problem: 1634
	User: 201901060610
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:748 kb
****************************************************************/

