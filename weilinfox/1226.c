#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>


int main()
{
    int i, j, k;
    int flag=1;
    int a, b;
    int n=0;

    while (scanf("%d%d", &a, &b)==2) {
        flag=1;
        n++;
        for (i=a; i<=b; i++) {
            for (j=i+1; j<=b; j++) {
                k=sqrt(i*i+j*j);
                if (i*i+j*j==k*k && k>j && k<=b) {
                    if (flag) {
                        printf("case %d:%d,%d,%d", n, i, j, k);
                        flag=0;
                    } else {
                        printf(";%d,%d,%d", i, j, k);
                    }
                }
                /*for (k=j+1; k<=b; k++) {
                    if (i*i+j*j==k*k) {
                        n++;
                        if (flag) {
                            printf("case %d:%d,%d,%d", n, i, j, k);
                            flag=0;
                        } else {
                            printf(";%d,%d,%d", i, j, k);
                        }
                    }
                }*/
            }
        }
        if (flag) {
            printf("case %d:No pythagorean triple\n", n);
        } else {
            putchar('\n');
        }
    }


    return 0;
}

/**************************************************************
	Problem: 1226
	User: 201901060401
	Language: C
	Result: Accepted
	Time:376 ms
	Memory:756 kb
****************************************************************/

