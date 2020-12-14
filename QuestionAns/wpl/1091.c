#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("start = %d, step = %d, end = %d",&a,&b,&c);
    printf("%d",a);
    if(b>0)
    {
        for(a+=b;a<=c;a+=b)
        printf(" %d",a);
    }
    else
    {
        for(a+=b;a>=c;a+=b)
        printf(" %d",a);
    }
}
/**************************************************************
	Problem: 1091
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

