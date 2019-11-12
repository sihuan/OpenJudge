#include <stdio.h>
 #include<math.h>
 #include<stdlib.h>
 double func(double x)
 {   if(x<0)
      x=fabs(x);
    else if(x>=0&&x<1)
      x=sin(2*x);
     else if(x>=1&&x<5)
      x=sqrt(x*x*x+x);
     else x=2.0*x+10;
     return x;
 }
 int output(int n, double x)
 {   int y,i;
     printf("case %d:y=%g.\n",n,x);
     return x;

 }


int main()
{
    int i, cases;
    double x;
    scanf("%d", &cases);
    for(i = 1; i <= cases; i++)
    {
        scanf("%lf", &x);
        output(i, func(x));
    }
    return 0;
}
/**************************************************************
	Problem: 1146
	User: 201901061304
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

