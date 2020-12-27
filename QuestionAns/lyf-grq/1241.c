#include <stdio.h>
int compare(int *min, int *mid, int *max)
{
	int t;
	if(*min>*mid){
		t = *min;
		*min = *mid;
		*mid = t;
	}
	if(*min>*max){
		t = *min;
		*min = *max;
		*max = t;
	}
	if(*max<*mid)
	{
		t = *max;
		*max = *mid;
		*mid = t;
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
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

