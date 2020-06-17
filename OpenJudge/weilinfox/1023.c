#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int a, b;
    int t;
    int i;

    //scanf("%d", &t);
    scanf("%d%d", &a, &b);
    printf("%d", a+b);
    while (scanf("%d%d", &a, &b)==2) {
        printf("\n\n%d", a+b);
    }



    return 0;
}

/**************************************************************
	Problem: 1023
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

