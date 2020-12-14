#include<stdio.h>
#include<math.h>


int maxValue(int a,int b,int c)
{
    int t;
    t=(a>b)?a:b;
    t=(t>c)?t:c;
    return t;
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
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

