#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int i;
    char ch[105];

    gets(ch);
    for (i=0; i<3; i++)
        printf("%s\n", ch);
    return 0;
}

/**************************************************************
	Problem: 2424
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

