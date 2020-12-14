#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n,f;
    int isFu = 0,z;
    scanf("%lf",&n);
    if(n < 0)
    {
        isFu = 1;
        n = -n;
    }
    z =(int)n;
    f = n-z;
    if(isFu)
        printf("- %d %.6g",z,f);
    else
        printf("+ %d %.6g",z,f);

    return 0;
}

/**************************************************************
	Problem: 1243
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

