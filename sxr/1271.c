#include <stdio.h>
#include <stdlib.h>

int digit_sum(int n)
{
    int sum=n;
    while(sum/10!=0)
    {
        sum=0;
        while(n/10!=0)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        sum=sum+n;
        n=sum;
    }
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
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

