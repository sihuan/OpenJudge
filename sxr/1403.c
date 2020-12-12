#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d",&a);
    b = sqrt(a);
    if(a==b*b && a%2==0 && a>0)
        printf("yes");
    else printf("no");
    return 0;
}

/**************************************************************
	Problem: 1403
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

