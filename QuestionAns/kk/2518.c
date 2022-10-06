#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int rev(unsigned long long n)
{
    if(n/10==0)
    {
        printf("%llu",n);
        return 0;
    }
    else
    {
        printf("%llu",n%10);
        rev(n/10);
    }

}

int main()
{
    unsigned long long n, r;
    scanf("%llu", &n);
    rev(n);
    printf("\n");
}

/**************************************************************
	Problem: 2518
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

