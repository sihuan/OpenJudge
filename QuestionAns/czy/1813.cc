#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;
int rec=0;
class  Point
{
private:
    double xx,yy;
public:
    Point():xx(0),yy(0)
    {
        //cout<<"The Point ("<<setprecision(2)<<fixed<<xx<<", "<<setprecision(2)<<fixed<<yy<<") is created!"<<endl;
    }
    Point(double x,double y):xx(x),yy(y)
    {
        x = xx;
        y = yy;
        //cout<<"The Point ("<<setprecision(2)<<fixed<<xx<<", "<<setprecision(2)<<fixed<<yy<<") is created!"<<endl;
    }
    ~Point()
    {
        //cout<<"A Point ("<<setprecision(2)<<fixed<<xx<<", "<<setprecision(2)<<fixed<<yy<<") is erased!"<<endl;
    }
    Point(const Point &p)
    {
        xx = p.xx;
        yy = p.yy;
        //cout<<"A Point ("<<setprecision(2)<<fixed<<xx<<", "<<setprecision(2)<<fixed<<yy<<") is copied!"<<endl;
    }
     double getX()
    {
        return xx;
    }
    double getY()
    {
        return yy;
    }
    void setX(double m)
    {
        xx = m;
    }
    void setY(double n)
    {
        yy = n;
    }
    friend class Circle;
};

class Circle
{
    friend class Point;
private:
    Point poi;
    double r;
public:
    Circle():poi(0,0),r(0){}
    Circle(Point &p,double r2):poi(p),r(r2){}
    int JudgeRelation(const Circle& c2)
    {
        double diff=(c2.poi.xx-poi.xx)*(c2.poi.xx-poi.xx)+(c2.poi.yy-poi.yy)*(c2.poi.yy-poi.yy);
        double r2=(c2.r+r)*(c2.r+r);
        double rx2=(c2.r-r)*(c2.r-r);
        if(diff==r2) return 3;
        if(diff>r2) return 1;
        if(diff<rx2) return 2;
        if(diff==rx2) return 4;
        return 5;
    }

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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

