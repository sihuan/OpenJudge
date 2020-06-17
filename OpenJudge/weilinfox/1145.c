
#include <stdio.h>
int main()
 {
    int n, i;
    scanf("%d", &n);
    for ( i=1; i<=n; i++) {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("case %d:sum=%d.\n", i, (a+b)*(b-a+1)/2);
    }
 }

/**************************************************************
	Problem: 1145
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

