#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int sta[1000000]={0};
int main()
{
    int n;
    int i, j, k;
    int t;
    int ans;

    scanf("%d", &n);
    while (n--) {
        scanf("%d", &t);
        sta[t]++;
    }
    int max=sta[0];
    for (i=0; i<=200000; i++) {
        if (sta[i]>max)
            max=sta[i];
    }
    printf("%d\n", max);

    return 0;
}

/**************************************************************
	Problem: 1469
	User: 201901060401
	Language: C
	Result: Accepted
	Time:68 ms
	Memory:4652 kb
****************************************************************/

