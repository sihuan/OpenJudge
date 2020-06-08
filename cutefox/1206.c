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
    result=pow(cos(x),-3);
    printf("%.2lf\n",result);
 }
    return 0;
}

/**************************************************************
	Problem: 1206
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

