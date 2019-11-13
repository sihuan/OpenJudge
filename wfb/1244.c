#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int h=0,m=0,s=0;
    while(scanf("%d",&n) && n)
    {
        --n;
        h = n/3600;
        n -= 3600*h;
        m = n/60;
        n -= 60*m;
        s = n;
        printf("%02d:%02d:%02d\n",h,m,s);
    }
    return 0;
}

/**************************************************************
	Problem: 1244
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

