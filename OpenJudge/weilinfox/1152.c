#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    int n, m;
    int i, j;
    int sta[101][101];
    int ans;

    scanf("%d", &n);
    m=n;
    while (n--) {
        int f=1;
        scanf("%d%d", &a, &b);
        for (i=0; i<a; i++) {
            for (j=0; j<b; j++) {
                scanf("%d", &sta[i][j]);
            }
        }
        printf("case %d:", m-n);
        for (i=0; i<a; i++) {
            ans=0;
            for (j=0; j<b; j++) {
                ans+=sta[i][j];
            }
            if (f) {
                printf("%d", ans);
                f=0;
            } else
                printf(" %d", ans);
        }
        putchar('\n');
    }


    return 0;
}

/**************************************************************
	Problem: 1152
	User: 201901060401
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

