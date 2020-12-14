#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char c;

    while((c=getchar())!=EOF)
    printf("%d\n", toupper(c)-'A'+1);

    return 0;
}

/**************************************************************
	Problem: 2411
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

