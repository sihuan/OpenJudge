#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<vector>
#include<cstdio>
#include<iomanip> 
#include<cstring>
#include<iostream>
#include<algorithm>
#define R register 
#define LL long long 
using namespace std;

struct POINT{
	int x, y;
};
struct Struct{
	int x, y;
};
struct CIRCLE{
	Struct center;
	int radius;
};
inline int judgeRelation(POINT p, CIRCLE cir){
	if((p.x - cir.center.x) * (p.x - cir.center.x) + (p.y - cir.center.y) * (p.y - cir.center.y) < cir.radius * cir.radius){
		return -1;
	}
	else if((p.x - cir.center.x) * (p.x - cir.center.x) + (p.y - cir.center.y) * (p.y - cir.center.y) == cir.radius * cir.radius){
		return 0;
	}
	else{
		return 1;
	}
}

int main()
{   POINT p;
    CIRCLE cir;
    int n;
    scanf("%d %d",&(p.x),&(p.y));
    scanf("%d %d %d",&(cir.center.x),&(cir.center.y),&(cir.radius));
    n=judgeRelation(p,cir);
    if(n==-1)
        printf("The point is inside the circle.");
    else if(n==0)
        printf("The point is on the circle.");
    else
        printf("The point is outside the circle.");
    return 0;
}

/**************************************************************
	Problem: 1569
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

