#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int n;
    int i, j;
    int a, b;
    int sta[105][105];
    int f=0;

    scanf("%d", &n);
    while (n--) {
        scanf("%d%d", &a, &b);
        for (i=0; i<a; i++) {
            for (j=0; j<b; j++) {
                scanf("%d", &sta[i][j]);
            }
        }
        if (f) {
            putchar('\n');
        } else {
            f=1;
        }

        int flag;
        for (i=0; i<b; i++) {
            flag=0;
            for (j=0; j<a; j++) {
                if (flag)
                    printf(" %d", sta[j][i]);
                else {
                    flag=1;
                    printf("%d", sta[j][i]);
                }
            }
            putchar('\n');
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1053
	User: 201901060401
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

