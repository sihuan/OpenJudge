#include<stdio.h>

int main(){
    double m,o,r;
    scanf("%lf%lf%lf",&m,&o,&r);
    double x,y;
    scanf("%lf%lf",&x,&y);
    x/=100.0;
    printf("%.2lf %.2lf %.2lf\n",x*m,x*o,x*r);
    printf("%.2lf %.2lf %.2lf",100.0/m*y,100.0/o*y,100.0/r*y);
    return 0;
}

/**************************************************************
	Problem: 1005
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

