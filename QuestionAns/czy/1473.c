#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int digits(int n)
{
    if(n<0) n=-n;
    int sum=0,m=0;
    if(n==0) return 1;
    while(1)
    {
        if(n/10==0)
        {
            ++m;
            break;
        }
        else
        {
            ++m;
            n=n/10;
        }
    }
    return m;
}


int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", digits(num));
}
/**************************************************************
	Problem: 1473
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

