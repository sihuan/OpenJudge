#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<ctype.h>

int main()
{
    int a[50]={1,2};
    int i, n;

    for (i=2; i<50; i++) {
        a[i]=a[i-1]+a[i-2];
    }

    scanf("%d", &i);
    for ( ; i>0; i--) {
        scanf("%d", &n);
        printf("%d\n", a[n-1]);
    }

    return 0;
}

/**************************************************************
	Problem: 1095
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

