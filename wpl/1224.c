#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maxValue(int a,int b,int c)
{
    if(a>=b&&a>=c)
        return a;
    if(b>=a&&b>=c)
        return b;
    if(c>=a&&c>=b)
        return c;
}


int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    printf("%d", maxValue(x, y, z));
    return 0;
}
/**************************************************************
	Problem: 1224
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

