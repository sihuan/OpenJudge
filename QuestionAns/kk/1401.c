#include<stdio.h>
#include<math.h>
#define PI 3.14159265358979323846
int main()
{
    double d,r,s,v;
    scanf("%lf",&d);
    r=d/2;
    s=4*PI*r*r;
    v=4.0/3*PI*r*r*r;
    printf("area = %lf\n",s);
    printf("volume = %lf",v);

}
/**************************************************************
	Problem: 1401
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

