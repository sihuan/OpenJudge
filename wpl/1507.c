#include <stdio.h>
#include <stdlib.h>

int main()
{
    double m;
    int n;
    scanf("%lf",&m);
    (m>0)?(m=m+0.5):(m=m-0.5);
    n=(int)m;
    printf("%d",n);
    return 0;
}

/**************************************************************
	Problem: 1507
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

