#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;++i)
    {
        double a,b,c,d;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        double t1=acos(c/a);
        double t2=acos(d/a);
        double y=0.5*a*b*   (2*t1-sin(2*t1)-2*t2+sin(2*t2));
        printf("%.3lf\n",y);
    }
}

/**************************************************************
	Problem: 1250
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

