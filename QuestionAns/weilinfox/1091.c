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
    int a, b, c;
    int flag=0;

    scanf("start = %d, step = %d, end = %d", &a, &b, &c);
    printf("%d", a);
    for (i=a+b; c>0?i<=c:i>=c; i+=b) {
        printf (" %d", i);
    }


    return 0;
}

/**************************************************************
	Problem: 1091
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

