#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int h,m,s;
    int n=0;
    while(scanf("%d:%d:%d",&h,&m,&s) != EOF)
    {
        n = h*3600+m*60+s;
        printf("%d\n",++n);
    }
    return 0;
}

/**************************************************************
	Problem: 1455
	User: 201601011420
	Language: C
	Result: Accepted
	Time:8 ms
	Memory:748 kb
****************************************************************/

