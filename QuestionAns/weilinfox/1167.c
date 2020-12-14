#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a==0) {
        printf("0");
    } else if(a>0) {
        int i=1;
        for ( ; i<=a; i++) {
            if (i==1)
                printf("%d", i);
            else
                printf(" %d", i);
        }
    } else {
        printf("%d", a++);
        for ( ; a<0; a++) {
            printf(" %d", a);
        }
    }


    return 0;
}

/**************************************************************
	Problem: 1167
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

