#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int i, j;
    int a, b;
    int flag=0;

    scanf("%d%d", &a, &b);
    printf("=====\n");
    if (a<3) {
        a=3;
        flag=1;
    }
    for (i=b; i>=a; i--) {
        for (j=2; j<i; j++) {
            if (i%j==0) {
                break;
            }
        }
        if (j<i) {
            continue;
        }
        printf("%d\n", i);
    }
    if (flag && b>=2) {
        printf("2\n");
    }
    printf("=====");

    return 0;
}

/**************************************************************
	Problem: 1027
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

