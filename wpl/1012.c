#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d",&d);
    a=d/100;
    e=d%100;
    b=e/10;
    c=e%10;
    (d==a*a*a+b*b*b+c*c*c)?(printf("YES")):(printf("NO"));

    return 0;
}

/**************************************************************
	Problem: 1012
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

