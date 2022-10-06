#include <stdio.h>
#include <stdlib.h>
struct point
{
    double x;
    double y;
};
void get_point(struct point *p)
{
    scanf("(%lf, %lf)",&p->x,&p->y);
}
void judge_point(struct point p)
{
    double a=p.x,b=p.y;
    if(a==0.0&&b==0.0) printf("(0.0, 0.0) is origin\n");
    else if(a>0.0&&b>0.0) printf("(%.1lf, %.1lf) is in quadrand I\n",a,b);
    else if(a<0&&b>0)  printf("(%.1lf, %.1lf) is in quadrand II\n",a,b);
    else if(a<0&&b<0) printf("(%.1lf, %.1lf) is in quadrand III\n",a,b);
    else if(a>0&&b<0) printf("(%.1lf, %.1lf) is in quadrand IV\n",a,b);
    else if(a==0 &&b!=0) printf("(%.1lf, %.1lf) is on the y axis\n",a,b);
    else if(a!=0&&b==0) printf("(%.1lf, %.1lf) is on the x axis\n",a,b);
}

int main()
{
    struct point p;
    get_point(&p);
    judge_point(p);
    return 0;
}
/**************************************************************
	Problem: 2039
	User: 202001060117
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

