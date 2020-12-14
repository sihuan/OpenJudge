#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int a, b;
    char ch;
    scanf("%d %c %d", &a, &ch, &b);
    ch=='+'? printf("%d %c %d = %d", a, ch, b, a+b) : printf("%d %c %d = %d", a, ch, b, a-b);




    return 0;
}

/**************************************************************
	Problem: 1905
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

