#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int a, b, c;
    int p, q;
    int i, j;
    int x, y, f;

    scanf("%d%d%d", &a, &b, &c);
    while (scanf("%d%d", &p, &q)==2) {
        f=1;
        for (i=q; i>=p; i--) {
            y=(c-a*i)/b;
            if (a*i+b*y==c && y>=p && y<=q) {
                x=i;
                if (x==0 && y==0)
                    continue;
                printf("%d %d\n", x, y);
                f=0;
                break;
            }
        }
        if (f)
            printf("no\n");
    }
}


/**************************************************************
	Problem: 2293
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

