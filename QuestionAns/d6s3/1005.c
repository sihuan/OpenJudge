#include<stdio.h>

int main()
{
    double hm,ho,hr;
    double wb,rmb;

    scanf("%lf %lf %lf",&hm,&ho,&hr);
    scanf("%lf",&wb);
    scanf("%lf",&rmb);

    printf("%.2lf %.2lf %.2lf\n", wb/100*hm,wb/100*ho,wb/100*hr);
    printf("%.2lf %.2lf %.2lf\n", rmb*100/hm,rmb*100/ho,rmb*100/hr);    
}
/**************************************************************
	Problem: 1005
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

