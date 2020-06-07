#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int a[1000000];
int main ()
{
    int n, m;
    int i, j;
    int sum, f, num;

    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        num=sum=0;
        f=0;
        for (i=0; i<m; i++) {
            scanf("%d", &a[i]);
            sum+=a[i];
        }

        for (i=0; i<m; i++) {
            if (a[i]==sum/m && floor(sum*1.0/m)==ceil(sum*1.0/m)) {
                num++;
            }
        }
        printf("%d\n", num);
        if (num) {
            for (i=0; i<m; i++) {
                if (a[i]==sum/m && floor(sum*1.0/m)==ceil(sum*1.0/m)) {
                    if (!f) {
                        printf("%d", i+1);
                    } else {
                        printf(" %d", i+1);
                    }
                    f++;
                }
            }
            printf("\n");
        }

    }


    return 0;
}

/**************************************************************
	Problem: 1080
	User: 201901060401
	Language: C
	Result: Accepted
	Time:28 ms
	Memory:4652 kb
****************************************************************/

