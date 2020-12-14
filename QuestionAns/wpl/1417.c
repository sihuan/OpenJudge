#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,x;
    int a=0;
    int b=0;
    while(~scanf("%f",&k))
    {
        a=a+k;
        b=b+1;
    }
    x=(float)a/(float)b;
    printf("%.3f",x);
    return 0;
}

/**************************************************************
	Problem: 1417
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

