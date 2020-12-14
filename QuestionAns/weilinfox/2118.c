#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int a;
    int i=1;
    scanf("%d", &a);
    while (i<=a)
        i*=10;
    if (a*a%i==a)
        printf("YES");
    else
        printf("NO");
    return 0;
}

/**************************************************************
	Problem: 2118
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

