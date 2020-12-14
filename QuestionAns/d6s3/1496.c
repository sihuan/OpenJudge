#include <stdio.h>

int main()
{
    int n, i, j, dl;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &dl);
        printf("case %d : ", i);
        for (j = 1; j <= dl; j++)
            printf("|");
        printf("\n");
    }
}
/**************************************************************
	Problem: 1496
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

