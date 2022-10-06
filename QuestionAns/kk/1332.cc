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
    void showNoEndOfLine() const
    {
        cout <<"Point : ("<<xx<<", "<<yy<<")";
    }
    void setPoint(double _x,double _y)
    {
        xx=_x;
        yy=_y;
    }
    double x() const
    {
        return xx;
    }
    double y() const
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
    void show() const
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
    void setStart(Point& p)
    {
        p1.setPoint(p.x(),p.y());
    }
    const Point& start() const
    {
        return p1;
    }
    void setEnd(Point& p)
    {
        p2.setPoint(p.x(),p.y());
    }
    const Point& end() const
    {
        return p2;
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
void showLineCoordinate(const Line& line)
{
    std::cout<<"Line : ";
    std::cout<<"("<<line.start().x()<<", "<<line.start().y()<<")";
    std::cout<<" to ";
    std::cout<<"("<<line.end().x()<<", "<<line.end().y()<<")";
    std::cout<<std::endl;
}

void showLinePoint(const Line& line)
{
    std::cout<<"Line : ";
    line.start().showNoEndOfLine();
    std::cout<<" to ";
    line.end().showNoEndOfLine();
    std::cout<<std::endl;
}

void showLine(const Line& line)
{
    line.show();
}

int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        line[i].readLine();
        showLine(line[i]);
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    showLineCoordinate(l1);
    showLinePoint(l2);
    showLinePoint(l3.setLine(l1));
    showLineCoordinate(l4.setLine(t,q));
    line[0].setStart(t);
    line[0].setEnd(q);
}

/**************************************************************
	Problem: 1332
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1272 kb
****************************************************************/

