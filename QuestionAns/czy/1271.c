#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int digit_sum(int n)
{
    int sum=0;
    while(n/10!=0)
    {
        sum=sum+n%10;
       // printf(" %d ",n);
        n=n/10;
    }
    sum=sum+n%10;
  //  printf("%d ",sum);
    if(sum>=10) digit_sum(sum);
    else return sum;
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

