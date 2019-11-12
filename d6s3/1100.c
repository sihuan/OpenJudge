#include <stdio.h>

int main()
{
    int n, i, d = 1, j = 1;
    scanf("%d", &n);
    printf("Sun Mon Tue Wen Thu Fri Sat\n");
    if (n != 7) {
        for (i = 1; i <= n; i++) {
            if (i == 1)
                printf("   ");
            else
                printf("    ");
            j++;
        }
    }
    while (d != 31) {
        if (j == 7) {
            printf("%4d\n", d++);
            j = 1;
        } else {
            if (j == 1) {
                printf("%3d", d++);
                j++;
            } else {
                printf("%4d", d++);
                j++;
            }
        }
    }
}
/**************************************************************
	Problem: 1100
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

