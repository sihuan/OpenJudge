#include <math.h>
#include <stdio.h>
typedef struct{
  double x;
  double y;
}POINT;

void input_point(POINT * pt){
  scanf("%lf %lf",&pt->x,&pt->y);
}

double distance(POINT pt1,POINT pt2){
  double dx = fabs(pt1.x - pt2.x);
  double dy = fabs(pt1.y - pt2.y);
  return sqrt(dx * dx + dy * dy);
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
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

