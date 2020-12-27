#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,sum;
    int a1,b1,c1;
    scanf("%d %d %d %d",&a,&b,&c,&sum);
    scanf("%d %d %d",&a1,&b1,&c1);
    if(a1>=a&&b1>=b&&c1>=c&&(a1+b1+c1)>=sum)
        printf("congratulations");
    else
        printf("sorry");
}

/**************************************************************
	Problem: 1404
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

