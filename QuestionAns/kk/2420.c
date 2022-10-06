#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 101
int main()
{
    unsigned long long k;
    while(scanf("%llu",&k)!=EOF)
    {
        if(k%2==0)
            printf("%llu\n",k/2*(k+1));
        else
            printf("%llu\n",(k+1)/2*k);
    }

}


/**************************************************************
	Problem: 2420
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

