#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef struct{
    double a,b;
}POINT;

void input_point(POINT *p){
    scanf("%lf%lf",&p->a,&p->b);
}
double distance(POINT p,POINT q){
    double d=sqrt((p.a-q.a)*(p.a-q.a)+(p.b-q.b)*(p.b-q.b));
    return d;
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:756 kb
****************************************************************/

