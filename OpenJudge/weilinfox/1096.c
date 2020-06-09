
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
    int a;
    int f=0;
    while (scanf("%d", &a) && a!=0) {
        int i, j;
        if (a%2==1) {
            if (f) {
                printf("\n");

            }else
                f=1;
            for (j=0; j<a; j++) {
                for (i=0; i<j; i++) {
                    printf(" ");
                }
                for (i=0; i<(a-j)*2-1; i++) {
                    printf("+");
                }
                printf("\n");
            }
        } else {
            if (f) {
                printf("\n");

            }else
                f=1;
            for (j=a; j>0; j--) {
                for (i=1; i<j; i++) {
                    printf(" ");
                }
                for (i=0; i<(a-j+1)*2-1; i++) {
                    printf("+");
                }
                printf("\n");
            }
        }
    }

    return 0;
}

/**************************************************************
	Problem: 1096
	User: 201901060401
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

