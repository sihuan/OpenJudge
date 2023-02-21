#include <stdio.h>

typedef struct
{
	int x;
	int y;
} point,vector;
int rtCross(vector l1,vector l2)
{//l1.x*(-l2.y) - (-l2.x)*l1.y;
	return -l1.x*l2.y + l2.x*l1.y;
}
int isConvex(point a1,point a2,point a3,point a4)
{
	vector l1,l2,l3,l4;
	l1.x = a1.x - a2.x;
	l1.y = a1.y - a2.y;
	l2.x = a2.x - a3.x;
	l2.y = a2.y - a3.y;
	l3.x = a3.x - a4.x;
	l3.y = a3.y - a4.y;
	l4.x = a4.x - a1.x;
	l4.y = a4.y - a1.y;
	if(rtCross(l1,l2)>0 && rtCross(l2,l3)>0 && rtCross(l3,l4)>0 && rtCross(l4,l1)>0)
        return 1;
    else if(rtCross(l1,l2)<0 && rtCross(l2,l3)<0 && rtCross(l3,l4)<0 && rtCross(l4,l1)<0)
        return 1;
	else return 0;
}
int main()
{
	int n;
	point a1,a2,a3,a4;
	int i;
	scanf("%d",&n);
	for(i=1; i<=n; ++i)
	{
		scanf("%d%d",&a1.x,&a1.y);
		scanf("%d%d",&a2.x,&a2.y);
		scanf("%d%d",&a3.x,&a3.y);
		scanf("%d%d",&a4.x,&a4.y);
		printf("Case %d: ",i);
		if(isConvex(a1,a2,a3,a4))
			printf("convex\n");
		else
			printf("concave\n");
	}
	return 0;
}


/**************************************************************
	Problem: 1561
	User: 202211070518
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

