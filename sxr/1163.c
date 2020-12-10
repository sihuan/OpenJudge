#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int h,m,a;
    scanf("%d:%d",&h,&m);
    if(h==12)
        printf("%02d:%02d p.m.",h,m);
    else if(h==0)
        printf("12:%02d a.m.",m);
    else if(h>12)
    {
        a=h-12;
        printf("%02d:%02d p.m.",a,m);
    }
    else if(h<12)
        printf("%02d:%02d a.m.",h,m);
    return 0;
}

/**************************************************************
	Problem: 1163
	User: 202001060915
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

