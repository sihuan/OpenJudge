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
    Line(double x1,double y1,double x2,double y2):p1(x1,y1),p2(x2,y2)
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
    ~Line()
    {
        cout<<"Line : ("<<p1.x()<<", "<<p1.y()<<") to ("<<p2.x()<<", "<<p2.y()<<") is erased."<<endl;
    }
private:
    Point p1,p2;
};
int main()
{
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    for(i = 1; i <= num; i++)
    {
        std::cout<<"=========================\n";
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        Line line(x1, y1, x2, y2);
        line.show();
    }
    std::cout<<"=========================\n";
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}

/**************************************************************
	Problem: 1329
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1272 kb
****************************************************************/

