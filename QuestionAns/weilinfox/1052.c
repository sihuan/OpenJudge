#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>
int n, m;
int sta[2][1005];

int main()
{
    int i, j, k;
    void print (void);

    scanf("%d", &j);
    j--;

    memset(sta, 0, sizeof sta);
    scanf("%d", &n);
    for (k=0; k<n; k++) {
        scanf("%d", &sta[0][k]);
    }
    while (j-->0) {
        scanf("%d", &m);
        for (k=0; k<m; k++) {
            scanf("%d", &sta[1][k]);
        }
        print();
        n=m;
        m=0;
        for (i=0; i<1005; i++) {
            sta[0][i]=sta[1][i];
            sta[1][i]=0;
        }
    }
    print();

    return 0;
}

void print(void)
{
    int i, f;

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

/**************************************************************
	Problem: 1052
	User: 201901060401
	Language: C
	Result: Accepted
	Time:24 ms
	Memory:756 kb
****************************************************************/

