#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, a, b, k, sum;
    scanf("%d", &m);
    for (int i = 1; i <= m; i++) {
        scanf("%d %d %d", &a, &b, &k);
        sum = 0;
        for (int c, j = a; j <= b; j++) {
            c = j;
            while (c) {
                if (abs(c % 10) == k) {
                    sum += j;
                    break;
                }
                c /= 10;
            }
        }
        printf("%d\n", sum);
    }
}
/**************************************************************
	Problem: 1118
	User: 201901060610
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

