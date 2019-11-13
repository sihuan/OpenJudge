#include <stdio.h>

void exchange(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int compare(int *min, int *mid, int *max)
{
	if(*min > *max)
	{
		exchange(min,max);
	}
	if(*min > *mid)
	{
		exchange(min,mid);
	}
	if(*mid > *max)
    {
        exchange(mid,max);
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

