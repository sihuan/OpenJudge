#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i, j;
    int n, m, t, max;
    int num[10005];

    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        memset(num, 0, sizeof num);
        max=0;
        while (m--) {
            scanf("%d", &t);
            num[t]++;
        }
        for (i=1; i<10000; i++) {
            if (num[i]>max)
                max=num[i];
        }

        printf("%d", max);
        for (i=1; i<10000; i++) {
            if (num[i]==max) {
                    printf(" %d", i);
            }
        }
        putchar('\n');
    }


    return 0;
}

/**************************************************************
	Problem: 1767
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

