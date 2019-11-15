#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char a[100];
    int sum=0, num=0, f=1;
    int i, j;
    int is(int);

    scanf("%s", a);
    if (a[0]=='-') {
        for (i=1; i<strlen(a); i++) {
            a[i-1]=a[i];
        }
        a[strlen(a)-1]='\0';
    }

    for (i=0; i<strlen(a); i++) {
        sum+=a[i]-'0';
    }
    for (i=0; i<strlen(a); i++) {
        num*=10;
        num+=a[i]-'0';
    }

    /*printf("%d %d ", sum, num);*/

    for (i=0; i<strlen(a); i++) {
        if (!is(a[i]-'0')) {
            f=0;
            break;
        }
    }
    if (is(sum) && is(num) && f) {
        printf("Even");
    } else if ((!is(sum)) && (!is(num)) && (!f)) {
        printf("Odd");
    } else {
        printf("None");
    }

    return 0;
}

int is(int a)
{
    if (a%2==0)
        return 1;
    else
        return 0;
}

/**************************************************************
	Problem: 1423
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

