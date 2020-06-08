#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 double x,result;
 int n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
    scanf("%lf",&x);
    result=pow((1+x*x),x)*(log(1+x*x)+2*(x*x)/(1+x*x));
    printf("%.2lf\n",result);
 }
    return 0;
}

/**************************************************************
	Problem: 1200
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

