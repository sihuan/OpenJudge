#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define MAX_SIZE 1000
char a[1000000];
int main()
{
    int i;
    int n;

    while (scanf("%s", a)==1) {
        scanf("%d", &n);
        if (strlen(a)>10 || n>strlen(a)) {
            printf("error\n");
        } else
            printf("%c\n", a[n-1]);
    }



    return 0;
}


/**************************************************************
	Problem: 1253
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:1724 kb
****************************************************************/

