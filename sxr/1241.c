#include<stdio.h>

int compare(int *min, int *mid, int *max)
{
    if(*min>*mid)
    {
        int t = *min;
        *min = *mid;
        *mid = t;
    }
    if(*min>*max)
    {
        int t = *min;
        *min = *max;
        *max = t;
    }
    if(*mid>*max)
    {
        int t = *max;
        *max = *mid;
        *mid = t;
    }
    return 0;
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
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

