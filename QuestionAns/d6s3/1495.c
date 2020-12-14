#include<stdio.h>
#include<math.h>

typedef struct{
    double x,y;
}POINT;

void input_point(POINT *pt)
{
    scanf("%lf %lf",&(pt->x),&(pt->y));
}

double distance(POINT p1, POINT p2)
{
    return sqrt(pow(p1.x-p2.x,2.0)+pow(p1.y-p2.y,2.0));
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

