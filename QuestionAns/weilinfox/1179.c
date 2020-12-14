#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int n, m;
    int front, end;
    int i, j;
    char ch;
    int f=0;
    int a[500005]={1,1};
    int isss(int);


    for (i=2; i<sqrt(500001); i++) {
        if (a[i]==0) {
            if (isss(i)) {
                for (j=2; j*i<500001; j++) {
                    a[j*i]=1;
                }
            } else {
                a[i]=1;
            }

        }
    }

    /*for (i=0; i<100; i++)
        if (!a[i])
            printf("%d\n", i);*/
    while (scanf("%d%d", &front, &end)==2) {
    	int flag=1;
        if (f)
            putchar('\n');
        else
            f=1;

        for (i=front; i<=end; i++) {
            if (!a[i]) {
                printf("%d\n", i);
                flag=0;
            }
        }
        if (flag)
        	putchar('\n');

    }



}

int isss (int a)
{
    int i;

    if (a==2) {
        return 1;
    } else {
        for (i=2; i<a; i++) {
            if (a%i==0)
                return 0;
        }
    }
    return 1;
}

/**************************************************************
	Problem: 1179
	User: 201901060401
	Language: C
	Result: Accepted
	Time:36 ms
	Memory:2624 kb
****************************************************************/

