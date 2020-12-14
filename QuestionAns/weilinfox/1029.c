//2;1;5;4;3;7;6;10;9;8
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned long long ans=0, a=1, i, j, t1=0, t2=0;


    scanf("%llu", &j);
    for (i=1; i<j+1; i++) {
        a*=i;
        ans+=a;
        if (a>4294967296 || ans>4294967296 ) {
            printf("overflow");
            return 0;
        }
    }






   /* for (i=t; i>0; i--) {
        a=1;
        for (j=i; j>0; j--) {

            if (j*a+ans>2e32-2) {
                printf("overflow");
                exit(0);
            } else {
                a*=j;
            }
        }
        ans+=a;
        if (ans>2e32-2) {
                printf("overflow");
                exit(0);
        }
    }*/
    printf("%llu", ans);


    return 0;
}

/**************************************************************
	Problem: 1029
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

