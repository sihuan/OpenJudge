#include <stdio.h>
int main()
{
    int N, M, i, j;
    double k;
    double ar[101];
    scanf("%d", &N);
    while (N--) {
        scanf("%d", &M);
        for (i = 0; i < M; i++)
            scanf("%lf", &ar[i]);
        for (i = 1; i < M; i++) {
            k = ar[i];
            j = i - 1;
            while ((j >= 0) && ((int)ar[j] > (int)k)) {
                ar[j + 1] = ar[j];
                j--;
            }
            ar[j + 1] = k;
        }
        printf("%.1lf", ar[0]);
        for (i = 1; i < M; i++)
            printf(" %.1lf", ar[i]);
        printf("\n");
    }
}
/**************************************************************
	Problem: 2045
	User: 201901060610
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

