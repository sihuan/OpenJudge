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
    i=0;
    while (scanf("%d", &n)==1) {
        i++;
        int sum=0;
        for (j=100; j<1000; j++) {
            if (j%n==0 && !(j%10==j%100/10 || j%10==j/100 || j/100==j%100/10))
                sum+=j;
        }
        printf("case %d:%d\n", i, sum);
    }


    return 0;
}

/**************************************************************
	Problem: 1207
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

