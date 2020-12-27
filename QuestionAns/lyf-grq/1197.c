#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2;
	double x,y,k,d,m,n,r;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    scanf("%lf %lf %lf",&x,&y,&r);
        if(x1==x2)
        d=fabs(x-x1);
        else
        {
            k=(y1-y2)/(x1-x2);
            d=fabs(k*x-y+y1-k*x1)/(sqrt(k*k+1));
        }
        if(d>r+0.001)
            printf("Disjoint");
        else if(d<r-0.001)
            printf("Interseetion");
        else if(fabs(d-r)<0.001)
            printf("Tangency");
}
/**************************************************************
	Problem: 1197
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

