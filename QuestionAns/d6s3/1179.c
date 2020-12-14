#include <math.h>
#include <stdio.h>
#include <string.h>

int isss(int x)
{
    if (x == 1) {
        return 0;
    }
    int k;
    k = (int)sqrt((double)x);
    for (int i = 2; i <= k; i++) {
        if (x % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b, c, i, j = 0;
    int ar[500001] = { 0 };
    while (scanf("%d %d", &a, &b) != EOF) {
        c = 0;
        for (i = a; i <= b; i++) {
            if (isss(i)) {
                for (j = i + 1; j <= b; j++) {
                    if (j % i == 0)
                        ar[j] = 1;
                }
            } else
                ar[i] = 1;
        }
        for (i = a; i <= b; i++) {
            if (ar[i] == 0) {
                printf("%d\n", i);
                c = 1;
            }
        }
        if (c == 0)
            printf("\n");
        printf("\n");
    }
}
/**************************************************************
	Problem: 1179
	User: 201901060610
	Language: C
	Result: Accepted
	Time:116 ms
	Memory:2636 kb
****************************************************************/

