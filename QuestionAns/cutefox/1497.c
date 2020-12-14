#include<stdio.h>

typedef struct point
{
    int x;
    int y;
}POINT;

typedef struct rect
{
    POINT LeftTop;
    POINT RightBottom;
}RECT;

void getPoint(POINT *p)
{
    scanf("%d %d", &p->x, &p->y);
}

void getRect(RECT *rc)
{
    scanf("%d %d %d %d", &rc->LeftTop.x, &rc->LeftTop.y, &rc->RightBottom.x, &rc->RightBottom.y);
}

int judgeRelation(POINT p,RECT rc)
{
    int retval;
    if( ((p.x == rc.LeftTop.x || p.x == rc.RightBottom.x) && (p.y <= rc.LeftTop.y && p.y >= rc.RightBottom.y))
     || ((p.y == rc.LeftTop.y || p.y == rc.RightBottom.y) && (p.x >= rc.LeftTop.x && p.x <= rc.RightBottom.x)) )
        retval = 1;
    else if(p.x > rc.LeftTop.x && p.x < rc.RightBottom.x && p.y < rc.LeftTop.y && p.y > rc.RightBottom.y)
        retval = 2;
    else
        retval = 3;
    return retval;
}

int main()
{
    POINT p;
    RECT rc;
    getPoint(&p);
    getRect(&rc);
    switch (judgeRelation(p,rc))
    {
    case 1:
        puts("The point is on one edge.");
        break;
    case 2:
        puts("The point is inside the rectangle.");
        break;
    case 3:
        puts("The point is outside the rectangle.");
        break;
    }
    return 0;
}
/**************************************************************
	Problem: 1497
	User: 201901060203
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

