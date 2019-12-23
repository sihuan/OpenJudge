#include <math.h>
#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n == 2 || n == 3 || n == 5 || n == 7 || n == 13 || n == 17 || n == 19 || n == 31)
            printf("%d\n", (int)(pow(2, n) - 1));
        else if (n == 61)
            printf("2305843009213693951\n");
        else
            printf("no\n");
    }
}
/**************************************************************
	Problem: 2026
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

