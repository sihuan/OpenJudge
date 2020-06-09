#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i;
    int a[1005];
    int f;
    void s(int*, int, int);

    scanf("%d", &m);
    while (m--) {
        scanf("%d", &n);
        for (i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        for (i=0; i<n-1; i++) {
            if (a[i]==a[i+1]) {
                s(a, i+1, n--);
                i--;
            }
        }
        f=1;
        for (i=0; i<n; i++) {
            if (f) {
                printf("%d", a[i]);
                f=0;
            } else {
                printf(" %d", a[i]);
            }
        }
        putchar('\n');
    }

    return 0;
}

void s(int* a, int j, int n)
{
    int i;
    for (i=j; i<n-1; i++) {
        a[i]=a[i+1];
    }

}

/**************************************************************
	Problem: 1176
	User: 201901060401
	Language: C
	Result: Accepted
	Time:20 ms
	Memory:748 kb
****************************************************************/

