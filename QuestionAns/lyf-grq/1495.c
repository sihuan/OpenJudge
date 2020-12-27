#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct POINT
{
    double x,y;
 
}POINT;
void input_point(POINT *p)
{
    scanf("%lf%lf",&p->x,&p->y);
}
double distance(POINT p1, POINT p2)
{
    double x1,y1,distance;
    x1=(p1.x-p2.x)*(p1.x-p2.x);
    y1=(p1.y-p2.y)*(p1.y-p2.y);
    distance=sqrt(x1+y1);
    return distance;
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
	User: 202001061101
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

