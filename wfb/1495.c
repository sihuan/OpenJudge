#include <stdio.h>
#include <math.h>
typedef struct POINT
{
    double x,y;
}POINT;
void input_point(POINT *pt)
{
    scanf("%lf%lf",&pt->x,&pt->y);
}
double distance(POINT p1, POINT p2)
{
    double x = p1.x - p2.x;
    double y = p1.y - p2.y;
    return sqrt(x*x+y*y);
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
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

