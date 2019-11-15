#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
char c[1005];
int main()
{
    int n, m;
    int i, j=0;
    char ch;

    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &m);
        if (m>0) {
            j++;
        }
    }
    printf("%d", j);

    return 0;
}


/**************************************************************
	Problem: 1230
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

