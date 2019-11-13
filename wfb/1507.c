#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    scanf("%lf",&n);
    int x;
    if(n>=0)
        x = (int)(n+0.5);
    else
        x = (int)(n-0.5);
    printf("%d",x);

    return 0;
}

/**************************************************************
	Problem: 1507
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

