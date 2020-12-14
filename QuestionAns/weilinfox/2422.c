#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

unsigned long long gett (unsigned long long i)
{
    unsigned long long n=0;
    while (i%2==0) {
        n++;
        i/=2;
    }
    return n;
}


unsigned long long getf (unsigned long long i)
{
    unsigned long long n=0;
    while (i%5==0) {
        n++;
        i/=5;
    }
    return n;
}


int main()
{
    unsigned long long a, b, t;
    unsigned long long n, num2, num5, num10;
    unsigned long long i, j;

    while (scanf("%llu", &n)==1) {
        num2=num5=num10=0;
        t=1;
        for (i=1; i<=n; i++) {
            if (i%2==0 || i%5==0) {
                num5+=getf(i);
                num2+=gett(i);
            }
        }
        printf("%llu\n", num2>num5?num5:num2);
    }


    return 0;
}

/**************************************************************
	Problem: 2422
	User: 201901060401
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:748 kb
****************************************************************/

