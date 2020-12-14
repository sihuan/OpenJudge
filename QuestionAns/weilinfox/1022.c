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
    while (scanf("%d%d", &a, &b)==2 && (a!=0 || b!=0)) {
        printf("%d\n", a+b);
    }



    return 0;
}

/**************************************************************
	Problem: 1022
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

