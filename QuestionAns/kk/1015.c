#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    unsigned long long int n,sum=0,i;
    scanf("%llu",&n);
    if(n%2==0)
        sum=n/2*(n+1);
    if(n%2!=0)
        sum=(n+1)/2*n;
    printf("%llu",sum);

}
/**************************************************************
	Problem: 1015
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

