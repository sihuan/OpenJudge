#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
    int a[105];
    int b;

    while (scanf("%d", &b)==1) {
        int i;
        for (i=0; i<b; i++) {
            scanf("%d", &a[i]);
        }
        for (i=b-1; i>=0; i--) {
            if (i==b-1)
                printf("%d", a[i]);
            else
                printf(" %d", a[i]);
        }
        putchar('\n');
    }

    return 0;
}

/*
int cmp (const void* a, const void *b)
{
    return (int)(*(int*)a-*(int*)b);
}

    int a[10]={12,12,45,4,8,878,2121,12,121, 88}, i;

    qsort(a, 10, sizeof(int), cmp);

    for (i=0; i<10; i++) printf("%d ", a[i]);

*/


/*


*/

/**************************************************************
	Problem: 2413
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

