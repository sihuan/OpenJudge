#include<bits/stdc++.h>
#include<cstring>
using namespace std;
class Point
{
    double x,y;
public:
    Point(double _x=0,double _y=0):x(_x),y(_y){}
    Point(){}
    friend double operator-(Point &p1,Point &p2)
    {
        double d;
        double dx,dy;
        dx=p1.x-p2.x;
        dy=p1.y-p2.y;
        d=sqrt(dx*dx+dy*dy);
        return d;
    }
};
int main()
{
    Point p1(10,10);
    double x, y;
    while(cin>>x>>y)
    {
        Point p2(x, y);
        cout<<p2 - p1<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 2304
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

