#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,m,g,h;
    scanf("%lf %lf %lf\n",&a,&b,&c);
    int x,y;
    scanf("%d\n",&x);
    scanf("%d",&y);
    d=x*0.01*a;

    e=x*0.01*b;

    f=x*0.01*c;

    m=y/a*100;

    g=y/b*100;

    h=y/c*100;
    printf("%.2lf %.2lf %.2lf\n",d , e , f);
    printf("%.2lf %.2lf %.2lf\n",m , g , h);
    return 0;




}

/**************************************************************
	Problem: 1005
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

