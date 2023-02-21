#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i, j;
    int sta[2][1005];
    int f;

    while (1) {
        if (scanf("%d", &n)==EOF)
            break;
        else {
            memset(sta, 0, sizeof sta);
            for (i=0; i<n; i++) {
                scanf("%d", &sta[0][i]);
            }
        }
        if (scanf("%d", &m)!=EOF) {
            for (i=0; i<m; i++) {
                scanf("%d", &sta[1][i]);
            }
        } else
            m=0;
        f=1;
        for (i=0; i<(m>n?m:n); i++) {
            if (f) {
                printf("%d", sta[0][i]+sta[1][i]);
                f=0;
            } else {
                printf(" %d", sta[0][i]+sta[1][i]);
            }
        }
        putchar('\n');
    }




    return 0;
}

/**************************************************************
	Problem: 1050
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

