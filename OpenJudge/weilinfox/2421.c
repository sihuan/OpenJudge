#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    long long a[20];
    int i;
    long long max, min;

    for (i=0; i<15; i++)
        scanf("%lld", &a[i]);

    max=min=a[0];
    for (i=0; i<15; i++) {
        if (a[i]>max)
            max=a[i];
        if (a[i]<min)
            min=a[i];
    }

    for (i=0; i<15; i++) {
        if (a[i]==max)
            a[i]=min;
    }

    max=a[0];
    for (i=0; i<15; i++) {
        if (a[i]>max)
            max=a[i];
    }

    printf("%lld\n", max);
    return 0;
}

/**************************************************************
	Problem: 2421
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

