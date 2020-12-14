#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int a;

    scanf("%d", &a);
    a=100-a;

        printf("$20 bills: %d\n", a/20);
        a-=(a/20*20);
        printf("$10 bills: %d\n", a/10);
        a-=(a/10*10);
        printf(" $5 bills: %d\n", a/5);
        a-=(a/5*5);
        printf(" $1 bills: %d", a);



    return 0;
}

/**************************************************************
	Problem: 1013
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

