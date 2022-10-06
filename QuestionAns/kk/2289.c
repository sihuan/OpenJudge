#include<stdio.h>
#define PI 3.14159
int main()
{
    double r,h,v;
    scanf("%lf%lf",&r,&h);
    v=PI*r*r*2+2*PI*r*h;
    printf("%.3lf",v);
}


/**************************************************************
	Problem: 2289
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

