#include<stdio.h>

#define PI 3.14
int main()
{
    double A,E,J;
    scanf("%lf%lf%lf",&A,&E,&J);
    double x,y;
    scanf("%lf%lf",&x,&y);
    printf("%.2f %.2f %.2f\n",x*A/100,x*E/100,x*J/100);
    printf("%.2f %.2f %.2f\n",x/A*100,x/E*100,x/J*100);
    return 0;
}

/**************************************************************
	Problem: 1005
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

