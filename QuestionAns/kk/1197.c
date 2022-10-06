#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double x1,x2,x3,y1,y2,y3,r;
    double a,b,c,d;
    scanf("%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&r);
    a=y1-y2;
    b=x2-x1;
    c=y1*(x1-x2)-x1*(y1-y2);
    d=fabs(a*x3+b*y3+c)/sqrt(a*a+b*b);
    if(fabs(d-r)<0.001)
        printf("Tangency");
    else if(r-d>0)
        printf("Interseetion");
    else if(r-d<0)
        printf("Disjoint");
    return 0;
}
/**************************************************************
	Problem: 1197
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

