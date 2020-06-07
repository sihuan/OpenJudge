#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int n, ans;
    int i, j, k, l;
    int a1, b1, a2, b2, a3, b3;
    int sta1[105][105], sta2[105][105], sta3[105][105];
    int f=0;

    scanf("%d%d", &a1, &b1);
    for (i=0; i<a1; i++) {
        for (j=0; j<b1; j++) {
            scanf("%d", &sta1[i][j]);
        }
    }
    while (1) {
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

        if (a2==b1) {
            int flag;
            a3=a1;
            b3=b2;
            for (i=0; i<a1; i++) {
                flag=0;
                for (j=0; j<b2; j++) {
                    ans=0;
                    for (k=0, l=0; k<b1; k++, l++) {
                        /*printf("%d %d\n", sta1[i][k], sta2[l][j]);*/
                        ans+=sta1[i][k]*sta2[l][j];
                    }
                    sta3[i][j]=ans;
                    if (flag)
                        printf(" %d", ans);
                    else {
                        flag=1;
                        printf("%d", ans);
                    }
                }
                putchar('\n');
            }

            for (i=0; i<a3; i++) {
                for (j=0; j<b3; j++) {
                    sta1[i][j]=sta3[i][j];
                }
            }
            a1=a3;
            b1=b3;
        } else {
            printf("Not satisfied the definition of matrix multiplication!\n");
            for (i=0; i<a2; i++) {
                for (j=0; j<b2; j++) {
                    sta1[i][j]=sta2[i][j];
                }
            }
            a1=a2;
            b1=b2;
        }

    }

    return 0;
}

/**************************************************************
	Problem: 1055
	User: 201901060401
	Language: C
	Result: Accepted
	Time:12 ms
	Memory:800 kb
****************************************************************/

