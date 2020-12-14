#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int n;
    int i, j;
    int a1, b1, a2, b2;
    int sta1[105][105], sta2[105][105];
    int f=0;


    while (1) {
        scanf("%d%d", &a1, &b1);
        if (a1==0 && b1==0)
            break;
        for (i=0; i<a1; i++) {
            for (j=0; j<b1; j++) {
                scanf("%d", &sta1[i][j]);
            }
        }
        scanf("%d%d", &a2, &b2);
        if (a2==0 && b2==0)
            break;
        for (i=0; i<a2; i++) {
            for (j=0; j<b2; j++) {
                scanf("%d", &sta2[i][j]);
            }
        }
        if (f) {
            putchar('\n');
        } else {
            f=1;
        }

        if (a1==a2 && b1==b2) {
            int flag;
            for (i=0; i<a1; i++) {
                flag=0;
                for (j=0; j<b1; j++) {
                    if (flag)
                        printf(" %d", sta1[i][j]+sta2[i][j]);
                    else {
                        flag=1;
                        printf("%d", sta1[i][j]+sta2[i][j]);
                    }
                }
                putchar('\n');
            }
        } else
            printf("Not satisfied the definition of matrix addition!\n");

        /*for (i=0; i<a2; i++) {
            for (j=0; j<b2; j++) {
                sta1[i][j]=sta2[i][j];
            }
        }
        a1=a2;
        b1=b2;*/
    }

    return 0;
}

/**************************************************************
	Problem: 1054
	User: 201901060401
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:760 kb
****************************************************************/

