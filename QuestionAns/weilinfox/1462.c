#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<ctype.h>

int main()
{
    int a[10005];
    int i, n;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    while (scanf("%d", &i)==1) {
        int j;
        int p=-1;
        int m=0;
        for (j=0; j<n; j++) {
            if (i==a[j])
                m++;
        }
        if (m==0)
            printf("NOT FOUND\n");
        else if (m==1) {
                for (j=0; j<n; j++) {
                    if (i==a[j]) {
                        printf("%d\n", j+1);
                        break;
                    }
                }
        } else {
            for (j=0; j<n; j++) {
                if (i==a[j]) {
                    printf("%d", j+1);
                    break;
                }
            }
            for (j++; j<n; j++) {
                if (i==a[j]) {
                    printf(" %d", j+1);
                }
            }
            putchar('\n');
        }
    }



    return 0;
}

/**************************************************************
	Problem: 1462
	User: 201901060401
	Language: C
	Result: Accepted
	Time:72 ms
	Memory:748 kb
****************************************************************/

