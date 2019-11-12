#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int maxValue(int x,int  y,int z)
{
    int i=x;
    if(y>i) i=y;
    if(z>i) i=z;
    return i;
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
	User: 201601160202
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

