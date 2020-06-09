#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int i, j;
    int a=-2e16, b=2e16-1;
    scanf("%d", &i);
    while (scanf("%d", &i)==1) {
        if (i>a) {
            a=i;
        }
        if (i<b) {
            b=i;
        }
    }

    printf("The maximum number is %d.\nThe minimum number is %d.", a ,b);
    return 0;
}

/**************************************************************
	Problem: 1024
	User: 201901060401
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

