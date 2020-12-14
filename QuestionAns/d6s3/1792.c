#include <stdio.h>

void prsp(int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf(" ");
}

int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        prsp(n - i);
        for (int j = n - 1; j > n - i; j--)
            printf("%d", j);
        printf("1");
        for (int j = n - i + 1; j < n; j++)
            printf("%d", j);
        prsp(n - i);
        printf("\n");
    }
    for (int j = 0; j < 2 * n - 1; j++)
        printf("1");
    printf("\n");
    for (i--; i > 0; i--) {
        prsp(n - i);
        for (int j = n - 1; j > n - i; j--)
            printf("%d", j);
        printf("1");
        for (int j = n - i + 1; j < n; j++)
            printf("%d", j);
        prsp(n - i);
        printf("\n");
    }
}
/**************************************************************
	Problem: 1792
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

