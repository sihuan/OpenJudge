#include <stdio.h>
int main()
{
double a,b,c,l,m,n;
int x,y;
scanf("%lf %lf %lf\n",&a,&b,&c);
scanf("%d\n",&x);
scanf("%d",&y);
l=a/100*x;
m=b/100*x;
n=c/100*x;
printf("%.2lf %.2lf %.2lf\n",l,m,n);
l=100/a*y;
m=100/b*y;
n=100/c*y;
printf("%.2lf %.2lf %.2lf\n",l,m,n);
    return 0;
}

/**************************************************************
	Problem: 1005
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

