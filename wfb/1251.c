#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define SWAP(a,b,t) t=a; a=b; b=t;
#define a (p2.y-p1.y)/((p2.x-p1.x)*(p2.x-p1.x))
typedef struct
{
    double x;
    double y;
}Point;
void ReadP(Point *p)
{
    scanf("%lf%lf",&p->x,&p->y);
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    Point p1,p2,p3;
    for(i=0; i<n; ++i)
    {
        ReadP(&p1);
        ReadP(&p2);
        ReadP(&p3);
        printf("%.2lf\n",
               a*(pow(p3.x-p1.x,3)
                -pow(p2.x-p1.x,3))/3
                + (p2.x-p3.x)*(p2.y+p3.y-2*p1.y)/2);
    }
 
    return 0;
}
/**************************************************************
	Problem: 1251
	User: 201601011420
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:760 kb
****************************************************************/

