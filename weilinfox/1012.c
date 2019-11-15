#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    b=a/100;
    c=(a%100)/10;
    d=a%10;
    if (b*b*b+d*d*d+c*c*c==a)
        printf("YES");
    else
        printf("NO");




    return 0;
}

/**************************************************************
	Problem: 1012
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

