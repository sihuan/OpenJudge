#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int compare(int *min, int *mid, int *max)
{
    int t;
    if (*min>*mid) {
        t=*min;
        *min=*mid;
        *mid=t;
    }
    if (*mid>*max) {
        t=*mid;
        *mid=*max;
        *max=t;
    }
    if (*min>*mid) {
        t=*min;
        *min=*mid;
        *mid=t;
    }
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    compare(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
/**************************************************************
	Problem: 1241
	User: 201901060401
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

