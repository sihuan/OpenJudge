#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    scanf("start = %d, step = %d, end = %d",&a,&b,&c);
    if(b>0)
    {
        printf("%d",a);
        d = a;
        while(d<=c-b)
        {
            d += b;
            printf(" %d",d);
        }
    }
    else if(b<=0)
    {
        printf("%d",a);
        d = a;
        while(d>=c-b)
        {
            d += b;
            printf(" %d",d);
        }
    }
    return 0;
}
/**************************************************************
	Problem: 1091
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

