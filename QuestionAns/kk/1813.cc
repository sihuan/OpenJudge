#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

class Point
{
public:

    Point(double _x,double _y)
    {
        x=_x;
        y=_y;
    }
    Point(const Point &another)
    {
        x=another.x;
        y=another.y;
    }
    double getDist(const Point &another)
    {
        return (x-another.x)*(x-another.x)+(y-another.y)*(y-another.y);
    }
private:
    double x,y;
};
class Circle
{
public:
    Circle(const Point &_p,double _r):p(_p)
    {
        r=_r;
    }
    int JudgeRelation(const Circle& another)
    {
        double distan;
        distan=sqrt(p.getDist(another.p));
        if(distan>(r+another.r))
            return 1;
        if(r>(distan+another.r))
            return 2;
        if(distan==r+another.r)
            return 3;
        if(r==distan+another.r)
            return 4;
        return 5;
    }
private:
    Point p;
    double r;
};
int main()
{
    int cases;
    double x, y, r;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>x>>y>>r;
        Point p1(x,y);
        Circle c1(p1, r);
        cin>>x>>y>>r;
        Point p2(x, y);
        Circle c2(p2, r);
        switch(c1.JudgeRelation(c2))
        {
        case 1:
            cout<<"Outside"<<endl;
            break;
        case 2:
            cout<<"Inside"<<endl;
            break;
        case 3:
            cout<<"Externally tangent"<<endl;
            break;
        case 4:
            cout<<"Internally tangent"<<endl;
            break;
        case 5:
            cout<<"Intersection"<<endl;
        }
    }
}
/**************************************************************
	Problem: 1813
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1280 kb
****************************************************************/

