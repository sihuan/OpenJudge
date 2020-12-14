#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    int i = 1;
    scanf("start = %d, step = %d, times = %d",&a,&b,&c);
    printf("%d",a);
    while(i<c)
    {
        a = a+b;
        printf(" %d",a);
        i++;
    }
    return 0;
}
/**************************************************************
	Problem: 1090
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

