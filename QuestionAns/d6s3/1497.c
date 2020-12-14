#include <stdio.h>

typedef struct point {
    int x; //横坐标
    int y; //纵坐标
} POINT;

typedef struct rect {
    POINT LeftTop; //左上角顶点的坐标
    POINT LeftBottom;
    POINT RightTop;
    POINT RightBottom; //右下角顶点的坐标

} RECT;

void getPoint(POINT* p)
{
    scanf("%d %d", &(p->x), &(p->y));
}

void getRect(RECT* rc)
{
    getPoint(&(rc->LeftTop));
    getPoint(&(rc->RightBottom));
}

int judgeRelation(POINT p, RECT rc)
{
    int r;
    if (((p.x == rc.LeftTop.x || p.x == rc.RightBottom.x) && (p.y <= rc.LeftTop.y && p.y >= rc.RightBottom.y))
        || ((p.y == rc.LeftTop.y || p.y == rc.RightBottom.y) && (p.x >= rc.LeftTop.x && p.x <= rc.RightBottom.x)))
        r = 1;
    else if (p.x > rc.LeftTop.x && p.x < rc.RightBottom.x && p.y < rc.LeftTop.y && p.y > rc.RightBottom.y)
        r = 2;
    else
        r = 3;
    return r;
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
	User: 201901060610
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

