#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x=sqrt(n);
    if(x*x==n&&n>0&&n%2==0)
        printf("yes");
    else
        printf("no");

return 0;
}

/**************************************************************
	Problem: 1403
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

