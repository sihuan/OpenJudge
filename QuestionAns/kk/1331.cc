#include <iostream>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

class Point
{
public:
    Point()
    {
        xx=0;
        yy=0;
        cout <<"Point : ("<<xx<<", "<<yy<<") is created."<<endl;
    }
    Point(double _x,double _y)
    {
        xx=_x;
        yy=_y;
        cout <<"Point : ("<<xx<<", "<<yy<<") is created."<<endl;
    }
    Point(double p)
    {
        xx=p;
        yy=p;
        cout <<"Point : ("<<xx<<", "<<yy<<") is created."<<endl;

    }
    Point(Point& another)
    {
        xx=another.xx;
        yy=another.yy;
        cout <<"Point : ("<<xx<<", "<<yy<<") is copied."<<endl;
    }
    void show()
    {
        cout <<"Point : ("<<xx<<", "<<yy<<")"<<endl;
    }
    void setPoint(double _x,double _y)
    {
        xx=_x;
        yy=_y;
    }
    double x()
    {
        return xx;
    }
    double y()
    {
        return yy;
    }
    ~Point()
    {
        cout <<"Point : ("<<xx<<", "<<yy<<") is erased."<<endl;
    }
private:
    double xx,yy;
};

class Line
{
public:
    Line(double x1=0,double y1=0,double x2=0,double y2=0):p1(x1,y1),p2(x2,y2)
    {
        cout<<"Line : ("<<p1.x()<<", "<<p1.y()<<") to ("<<p2.x()<<", "<<p2.y()<<") is created."<<endl;
    }
    Line(Point &_p1,Point &_p2):p1(_p1),p2(_p2)
    {
        cout<<"Line : ("<<p1.x()<<", "<<p1.y()<<") to ("<<p2.x()<<", "<<p2.y()<<") is created."<<endl;
    }
    Line(Line &another):p1(another.p1),p2(another.p2)
    {
        cout<<"Line : ("<<p1.x()<<", "<<p1.y()<<") to ("<<p2.x()<<", "<<p2.y()<<") is copied."<<endl;

    }
    void show()
    {
        cout<<"Line : ("<<p1.x()<<", "<<p1.y()<<") to ("<<p2.x()<<", "<<p2.y()<<")"<<endl;
    }
    void SetLine(double x1,double y1,double x2,double y2)
    {
        p1.setPoint(x1,y1);
        p2.setPoint(x2,y2);
    }
    Line& setLine(Line &another)
    {
        p1.setPoint(another.p1.x(),another.p1.y());
        p2.setPoint(another.p2.x(),another.p2.y());
        return *this;
    }
    Line& setLine(Point& ap1,Point& ap2)
    {
        p1.setPoint(ap1.x(),ap1.y());
        p2.setPoint(ap2.x(),ap2.y());
        return *this;
    }
    void readLine()
    {
        double x1,x2,y1,y2;
        char c;
        cin>>x1>>c>>y1>>x2>>c>>y2;
        p1.setPoint(x1,y1);
        p2.setPoint(x2,y2);
    }
    ~Line()
    {
        cout<<"Line : ("<<p1.x()<<", "<<p1.y()<<") to ("<<p2.x()<<", "<<p2.y()<<") is erased."<<endl;
    }
private:
    Point p1,p2;
};

int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num];
    for(i = 0; i < num; i++)
    {
        line[i].readLine();
        line[i].show();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    l1.show();
    l2.setLine(l1).show();
    l3.show();
    l4.setLine(t,q).show();
}
/**************************************************************
	Problem: 1331
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1272 kb
****************************************************************/

