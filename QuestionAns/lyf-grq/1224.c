#include <stdio.h>
#include <string.h>
#define max 105
int maxValue(int a,int b,int c)
{
    int t;
    if(a<=b)
    t=b;
    else
    t=a;
    if(c<=t)
    return t;
    else
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
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

