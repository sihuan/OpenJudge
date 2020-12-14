#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,i;
    scanf("start = %d, step = %d, times = %d",&a,&b,&c);
    for(i=1;i<=c;i++)
    {
        printf("%d ",a);
        a=a+b;
    }
    return 0;
}

/**************************************************************
	Problem: 1090
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

