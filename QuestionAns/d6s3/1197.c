#include <math.h>
#include <stdio.h>

int main()
{
    double s,l;
    double x1,x2,y1,y2,a,b,r;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&a,&b,&r);
    s = fabs(x1 * y2 + x2 * b + a * y1 - x1 * b - x2 * y1 - a * y2);
    l=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    if(fabs((s/l)-r)<0.001)
        printf("Tangency\n");
    else if(s/l>r)
        printf("Disjoint\n");
    else
        printf("Interseetion\n");
}
/**************************************************************
	Problem: 1197
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

