#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>


int main()
{
    int n[6]={0};
    int s[1005];
    int num=0;
    int i, j, k;
    int t;
    int ans;

    while (scanf("%d", &t)==1) {
        if (t>100 || t<0) {
            continue;
        }
        s[num++]=t;
        switch (t/10) {
            case 10:
            case 9:
                n[0]++;
                break;
            case 8:
                n[1]++;
                break;
            case 7:
                n[2]++;
                break;
            case 6:
                n[3]++;
                break;
            default:
                n[4]++;
        }
    }
    if (n[0]!=0) {
        printf("Excellent : %d\n", n[0]);
        int f=1;
        for (i=0; i<num; i++) {
            if (s[i]>89) {
                if (f) {
                    printf("%d", s[i]);
                    f=0;
                } else {
                    printf(", %d", s[i]);
                }
            }
        }
        putchar('\n');
    } else
        printf("Excellent : %d\n", n[0]);

    if (n[1]!=0) {
        printf("Good : %d\n", n[1]);
        int f=1;
        for (i=0; i<num; i++) {
            if (s[i]<90 && s[i]>79) {
                if (f) {
                    printf("%d", s[i]);
                    f=0;
                } else {
                    printf(", %d", s[i]);
                }
            }
        }
        putchar('\n');
    } else
        printf("Good : %d\n", n[1]);

    if (n[2]!=0) {
        printf("Average : %d\n", n[2]);
        int f=1;
        for (i=0; i<num; i++) {
            if (s[i]<80 && s[i]>69) {
                if (f) {
                    printf("%d", s[i]);
                    f=0;
                } else {
                    printf(", %d", s[i]);
                }
            }
        }
        putchar('\n');
    } else
        printf("Average : %d\n", n[2]);

    if (n[3]!=0) {
        printf("Pass : %d\n", n[3]);
        int f=1;
        for (i=0; i<num; i++) {
            if (s[i]<70 && s[i]>59) {
                if (f) {
                    printf("%d", s[i]);
                    f=0;
                } else {
                    printf(", %d", s[i]);
                }
            }
        }
        putchar('\n');
    } else
        printf("Pass : %d\n", n[3]);

    if (n[4]!=0) {
        printf("Failing : %d\n", n[4]);
        int f=1;
        for (i=0; i<num; i++) {
            if (s[i]<60) {
                if (f) {
                    printf("%d", s[i]);
                    f=0;
                } else {
                    printf(", %d", s[i]);
                }
            }
        }
        putchar('\n');
    } else
        printf("Failing : %d\n", n[4]);

    return 0;
}

/**************************************************************
	Problem: 1177
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

