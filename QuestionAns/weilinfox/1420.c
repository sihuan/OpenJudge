#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int i, j, k;
    int n;
    int t;
    char ch;
    int a, b;
    int flag=0;

    scanf("%d", &i);
    for (j=0; j<i; j++) {
        int sum=0;
        scanf ("%d", &n);
        for ( ; n>0; n--) {
            scanf("%d", &t);
            if (t%2==0) {
                sum+=t;
            } else {
                sum+=t+1;
            }
        }
        printf("Case %d: %d\n", j+1, sum);
    }

    return 0;
}

/**************************************************************
	Problem: 1420
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

