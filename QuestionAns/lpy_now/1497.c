#include<stdio.h>

typedef struct point{
    int x,y;
}POINT;
typedef struct rect{
    POINT left,right;
}RECT;

void getPoint(POINT *p){
    scanf("%d%d",&p->x,&p->y);
}
void getRect(RECT *rc){
    scanf("%d%d%d%d",&rc->left.x,&rc->left.y,&rc->right.x,&rc->right.y);
}
int judgeRelation(POINT p,RECT rc){
    if((p.x==rc.left.x && p.y>=rc.right.y && p.y<=rc.left.y) || (p.x==rc.right.x && p.y>=rc.right.y && p.y<=rc.left.y) || (p.y==rc.left.y && p.x>=rc.left.x && p.x<=rc.right.x) || (p.y==rc.right.y && p.x>=rc.left.x && p.x<=rc.right.x)){
        return 1;
    }
    if(p.x>rc.left.x && p.x<rc.right.x && p.y>rc.right.y && p.y<rc.left.y){
        return 2;
    }
    return 3;
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
	User: 201901061011
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

