#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int n;
    int sta[1005];
    double mid;
    int i, j;

    while (scanf("%d", &n)==1 && n!=0) {
        for (i=0; i<n; i++) {
            scanf("%d", &sta[i]);
        }
        for (i=0; i<n; i++) {
            for (j=n-1; j>i; j--) {
                if (sta[j]<sta[j-1]) {
                    int t;
                    t=sta[j];
                    sta[j]=sta[j-1];
                    sta[j-1]=t;
                }
            }
        }
        /*for (i=0; i<n; i++) {
            printf("%d", sta[i]);
        }*/
        if (n%2==1)
            printf("%lg\n", (double)sta[n/2]);
        else {
            mid=(sta[n/2-1]+sta[n/2])*1.0/2;
            printf("%lg\n", mid);
        }
    }
    return 0;
}

/**************************************************************
	Problem: 1508
	User: 201901060401
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

