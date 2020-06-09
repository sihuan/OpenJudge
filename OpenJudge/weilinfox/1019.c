#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int k, m, n;
    int i, j;
    int flag=0;
    scanf("%d%d%d", &k, &m, &n);
    for (i=1; i<=k; i++) {
        if ((i%m==0 || i%n==0) && (i%m!=0 || i%n!=0))
            if (!flag) {
            printf("%d", i);
            flag=1;
            } else
            printf(" %d", i);
    }

    return 0;
}

/**************************************************************
	Problem: 1019
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

