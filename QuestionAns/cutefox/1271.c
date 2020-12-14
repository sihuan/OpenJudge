#include <stdio.h>
#include <stdlib.h>
int digit_sum(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    if(sum>=10)
        sum=digit_sum(sum);
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
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

