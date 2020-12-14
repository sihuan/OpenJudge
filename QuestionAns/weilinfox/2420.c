#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    unsigned long long a;

    while (scanf("%llu", &a)==1) {
        if (a%2==0) {
            printf("%llu\n", a/2*(1+a));
        } else {
            printf("%llu\n", (1+a)/2*a);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 2420
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

