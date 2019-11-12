#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct q
{
    double x,y;
}POINT;

void input_point(POINT *pt);
double distance(POINT p1, POINT p2);
void input_point(POINT *pt)
{
    scanf("%lf%lf",&(*pt).x,&(*pt).y);
}
double distance(POINT p1, POINT p2)
{
    //printf("%lf %lf",p1.x-p2.x,p1.y-p2.y);
    double x=fabs(p1.x-p2.x);
    double y=fabs(p1.y-p2.y);
  //  printf("%lf",sqrt(0.08));

    x=x*x;
    y=y*y;
   // printf("%lf %lf",x,y);
        return sqrt(fabs(x+y));
}

int main()
{
   POINT p,q;
   double dis;
   input_point(&p);
   input_point(&q);
   dis=distance(p,q);
   printf("%g",dis);
   return 0;
}
/**************************************************************
	Problem: 1495
	User: 201601160202
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

