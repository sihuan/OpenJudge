#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int maxValue(int a,int b,int c)
{
    int max;
    if(a>b)
        max=a;
    else
        max=b;
    if(c>max)
        max=c;
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
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

