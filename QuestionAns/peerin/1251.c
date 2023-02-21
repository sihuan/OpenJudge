#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    double x1,y1,x2,y2,x3,y3,a;
    for(i=0;i<n;++i)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3);
        a=(y2-y1)/((x1-x2)*(x1-x2));
        printf("%.2lf\n",a*(x3*x3*x3-x2*x2*x2)/3-a*x1*x3*x3+(y1+a*x1*x1)*(x3-x2)+a*x1*x2*x2-(y2+y3)*(x3-x2)/2);
    }
}


/**************************************************************
	Problem: 1251
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

