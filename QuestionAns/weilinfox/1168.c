#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int n;
    int f=0;
    scanf("%d", &n);
    for ( ; n>0; n--) {
        long long a, b;
        long long t;
        scanf("%lld%lld", &a, &b);
        if (a>b) {
            t=a;
            a=b;
            b=t;
        }
        if (a==b) {
            if (f) {
                printf("\n");
            } else {
                f=1;
            }
            printf("%lld\n", a);
        } else if(a<b) {
            long long i=a;
            int flag=0;
            /*if (b==2147483647){
                b--;
                flag=1;
            }*/
            if (f) {
                printf("\n");
            } else {
                f=1;
            }
            for ( ; i<=b; i++) {
                if (i==a)
                    printf("%lld", i);
                else
                    printf(" %lld", i);
            }
            /*if (flag){
                printf(" %d", i);
            }*/
            printf("\n");
        } /*else {
            long long i=a;
            int flag=0;
            if (b==-2147483648){
                b++;
                flag=1;
            }
            if (f) {
                printf("\n");
            } else {
                f=1;
            }
            for ( ; i>=b; i--) {
                if (i==a) {
                    printf("%lld", i);
                } else {
                    printf(" %lld", i);
                }
            }
            if (flag) {
                    printf(" %d", -2147483648);

            }
            printf("\n");
        }*/
    }

    return 0;
}



/**************************************************************
	Problem: 1168
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

