#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


int main()
{
    char p[25], t[25];
    int i;

    scanf("%s", p);
    for (i=0; i<5; i++) {
        if (scanf("%s", t)!=EOF) {
            if (!strcmp(t, p)) {
                printf("Welcome!\n");
                return 0;
            }
            else
                printf("Wrong!\n");
        } else
            break;
    }
    while (scanf("%s", t)!=EOF)
        printf("Out of limited!\n");

    return 0;
}

/**************************************************************
	Problem: 1093
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

