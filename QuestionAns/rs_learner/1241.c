#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(int *min, int *mid, int *max)
{
    int t;
    if(*min>*mid)
    {
        t=*min;
        *min=*mid;
        *mid=t;
    }
    if(*min>*max)
    {
        t=*min;
        *min=*max;
        *max=t;
    }
    if(*mid>*max)
    {
        t=*mid;
        *mid=*max;
        *max=t;
    }


    return *min,*mid,*max;
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
	User: 201801020908
	Language: C
	Result: Accepted
	Time:16 ms
	Memory:748 kb
****************************************************************/

