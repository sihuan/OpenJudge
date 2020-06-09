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

    scanf("%d", &j);
    while (j>0) {
        memset(sta, 0, sizeof sta);
        n=0;
        if (j--) {
            while (1) {
                scanf("%d", &sta[0][n++]);
                if (sta[0][n-1]==0) {
                    n--;
                    break;
                }
            }
        }
        m=0;
        if (j--) {
            while (1) {
                scanf("%d", &sta[1][m++]);
                if (sta[1][m-1]==0) {
                    m--;
                    break;
                }
            }
        }
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
	Problem: 1051
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

