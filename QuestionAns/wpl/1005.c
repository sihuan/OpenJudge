#include <stdio.h>
int main()
{
    double a,b,c;
    int x,y;
    scanf("%lf%lf%lf",&a,&b,&c);
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%.2lf %.2lf %.2lf\n",(double)x/100*a,(double)x/100*b,(double)x/100*c);
    printf("%.2lf %.2lf %.2lf\n",(double)y*100/a,(double)y*100/b,(double)y*100/c);
    return 0;
}

/**************************************************************
	Problem: 1005
	User: 201901060819
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

