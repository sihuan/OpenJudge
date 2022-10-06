#include<stdio.h>
int maxValue(int a,int b,int c)
{
    int max;
    max=a;
    if(max<b)max=b;
    if(max<c)max=c;
    return max;
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
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

