#include <cmath>
#include <iostream>
using namespace std;

class Point {
private:
    double x_, y_;

public:
    Point(int x, int y)
        : x_(x)
        , y_(y)
    {
    }
    Point(const Point& p)
        : x_(p.x_)
        , y_(p.y_)
    {
    }
    double x() const
    {
        return x_;
    }
    double y() const
    {
        return y_;
    }
};

class Circle {
private:
    Point c_;
    double r_;
    double ptpd(const Point& p)
    {
        return sqrt(pow(c_.x() - p.x(), 2) + pow(c_.y() - p.y(), 2));
    }

public:
    Circle(Point p, double r)
        : c_(p)
        , r_(r)
    {
    }
    Circle(const Circle& c)
        : c_(c.c_)
        , r_(c.r_)
    {
    }
    int JudgeRelation(const Circle& c)
    {
        double d = ptpd(c.c_);
        if (d > r_ + c.r_)
            return 1;
        else if (d < r_ + c.r_) {
            double rs = min(r_, c.r_);
            double rb = max(r_, c.r_);
            if (rs + d == rb)
                return 4;
            else if (rs + d < rb)
                return 2;
            else
                return 5;
        } else
            return 3;
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

