#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,x;
    scanf("%d",&x);
        a=x/100;
        b=x/10%10;
        c=x%10;
        if(x==a*a*a+b*b*b+c*c*c)
            printf("YES");
        else
            printf("NO");
    return 0;
}

/**************************************************************
	Problem: 1012
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

