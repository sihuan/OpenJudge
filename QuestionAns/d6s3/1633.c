#include <stdio.h>
 
int jc(int n)
{
    if (n == 0)
        return 1;
    return n * jc(n - 1);
}
 
int c(int m, int n)
{
    return (jc(n) / (jc(m) * jc(n - m)));
}
 
int main()
{
    int n, i, j, a = 0;
    while (scanf("%d", &n) != EOF) {
        if (a++ != 0)
            printf("\n");
        for (i = 0; i < n; i++) {
            for (j = 0; j < (n - i - 1) * 2; j++)
                printf(" ");
            for (j = 0; j <= i; j++) {
                printf("%4d", c(j, i));
                if (j == i)
                    printf("\n");
            }
        }
    }
}
/**************************************************************
	Problem: 1633
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

