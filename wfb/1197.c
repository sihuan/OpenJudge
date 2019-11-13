#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    #ifdef LOCAL
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    double x1,y1;
    double x2,y2;
    double x,y,r;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    scanf("%lf%lf%lf",&x,&y,&r);
    double A = y1-y2;
    double B = x2-x1;
    double C = x1*y2-x2*y1;
    double d = (A*x+B*y+C)/(sqrt(A*A+B*B));
    if(d<0) d = -d;
    if(fabs(d-r) < 1e-3)
        printf("Tangency\n");
    else if(d > r - 1e-3)
        printf("Disjoint\n");
    else
        printf("Interseetion\n");
	return 0;
}

/**************************************************************
	Problem: 1197
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

