#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX_STR_LEN 101
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int sum=0,x=5;
        while(x<=n)
        {
            sum+=n/x;
            x*=5;
        }
        printf("%d\n",sum);
    }
}
/**************************************************************
	Problem: 2422
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

