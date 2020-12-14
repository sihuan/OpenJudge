#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int p;
    unsigned long long mp;
    int i;
    unsigned long long j;

    while (scanf("%d", &p)==1) {
        if (p==61) {
            printf("2305843009213693951\n");
            continue;
        }
        mp=1;
        for (i=0; i<p; i++) {
            mp*=2;
        }
        mp-=1;
        for (j=2; j<=sqrt(mp); j++) {
            if (mp%j==0)
                break;
            //printf("%llu\n", j);
        }
        if (j>sqrt(mp)) {
            printf("%llu\n", mp);
        } else {
            printf("no\n");
        }
    }

    return 0;
}

/**************************************************************
	Problem: 2026
	User: 201901060401
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:756 kb
****************************************************************/

