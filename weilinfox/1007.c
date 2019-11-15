#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a;
    int f;
    scanf("%d", &a);
    f = a%2==0 ? 1 : 0;
    if (f)
        printf("even");
    else
        printf("odd");


    return 0;
}

/**************************************************************
	Problem: 1007
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

