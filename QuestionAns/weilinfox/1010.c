#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int a, b, c, t;
    scanf("%d", &a);
    if (a%400==0) {
        printf("Yes");
    } else if (a%100==0) {
        printf("No");
    } else if (a%4==0) {
        printf("Yes");
    } else {
        printf("No");
    }




    return 0;
}

/**************************************************************
	Problem: 1010
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

