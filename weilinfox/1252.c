#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("  a   : %d\n", a);
    printf("--a   : %d\n", --a);
    a++;
    printf("  a-- : %d\n", a--);
    a++;
    printf("  a++ : %d\n", a++);
    a--;
    printf("++a   : %d", ++a);

    return 0;
}

/**************************************************************
	Problem: 1252
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

