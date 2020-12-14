#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int a, b, c;
    int i, j;
    int n;

    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%d%d%d", &a, &b, &c);
        if (a+b>c && a+c>b&& b+c>a) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1079
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

