#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int sta[10005]={1, 1, 1, 0};
    int i, j;
    int n;

    for (i=2; i<sqrt(10005); i++) {
        for (j=i*2; j<10002; j+=i) {
            sta[j]=1;
        }
    }
    /*for (i=0; i<10000; i++) {
        if (!sta[i])
            printf("%d\n", i);
    }*/

    scanf("%d", &n);
    for (i=3; i<=n/2; i+=2) {
        if (!sta[i] && !sta[n-i]) {
            printf("%d + %d = %d\n", i, n-i, n);
        }
    }


    return 0;
}

/**************************************************************
	Problem: 1456
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

