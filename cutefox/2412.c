#include <stdio.h>
#include <stdlib.h>
int main()
{
  double p,w,m,x,y;
  scanf("%lf%lf%lf",&p,&w,&m);
  x=p*w*m;
  if(m<=500)
    printf("%.2lf",x);
     else if(m<=1000)
    printf("%.2lf",500*p*w+0.95*p*w*(m-500));
    else  if(m<=2000)
    printf("%.2lf",500*p*w+0.95*p*w*500+0.9*p*w*(m-1000));
   else
    printf("%.2lf",500*p*w+0.95*p*w*500+0.9*p*w*1000+0.88*p*w*(m-2000));
    return 0;
}

/**************************************************************
	Problem: 2412
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

