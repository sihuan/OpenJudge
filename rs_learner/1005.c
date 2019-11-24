#include<stdio.h>
int main()
{
    double a,b,c;
    int x,y;
    scanf("%lf %lf %lf\n",&a,&b,&c);
    scanf("%d\n",&x);
    scanf("%d",&y);
    printf("%.2lf %.2lf %.2lf\n",x*a/100,x*b/100,x*c/100);
    printf("%.2lf %.2lf %.2lf",y/a*100,y/b*100,y/c*100);
    return 0;
}

/**************************************************************
	Problem: 1005
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

