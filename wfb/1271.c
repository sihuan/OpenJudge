#include<stdio.h>
int digit_sum(int num)
{
	int sum=0;
	while(num)
	{
		int i=num%10;
		num/=10;
		sum += i;
	}
	if(sum >= 10) sum = digit_sum(sum);
	return sum;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", digit_sum(n));
    return 0;
}
/**************************************************************
	Problem: 1271
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

