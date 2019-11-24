#include<iostream>
using namespace std;
class Point
{
friend class Line;
private:
    double x,y;
public:
    Point(double _x=0,double _y=0):x(_x),y(_y)
    {
        cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
    }
    Point(const Point &p)
    {
        x=p.x;
        y=p.y;
        cout<<"Point : ("<<x<<", "<<y<<") is copied."<<endl;
    }
    void show()
    {
        cout<<"Point : ("<<x<<", "<<y<<")"<<endl;
    }
    ~Point()
    {
        cout<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;
    }
};
class Line
{
    friend class Point;
private:
    Point p1,p2;
public:
    Line():p1(0,0),p2(0,0){cout<<"Line : (0, 0) to (0, 0) is created."<<endl;}
    Line(double x1,double y1,double x2,double y2):p1(x1,y1),p2(x2,y2)
    {
        cout<<"Line : ("<<p1.x<<", "<<p1.y<<") to ("<<p2.x<<", "<<p2.y<<") is created."<<endl;
    }
    Line(Point& _p1,Point& _p2):p1(_p1),p2(_p2)
    {
         cout<<"Line : ("<<p1.x<<", "<<p1.y<<") to ("<<p2.x<<", "<<p2.y<<") is created."<<endl;
    }
    ~Line()
    {
         cout<<"Line : ("<<p1.x<<", "<<p1.y<<") to ("<<p2.x<<", "<<p2.y<<") is erased."<<endl;
    }
    void setLine(double x1,double y1,double x2,double y2)
    {
        p1.x=x1;
        p1.y=y1;
        p2.x=x2;
        p2.y=y2;
    }
    Line& setLine(const Point &_p1,const Point &_p2)
    {
        p1.x=_p1.x;
        p1.y=_p1.y;
        p2.x=_p2.x;
        p2.y=_p2.y;
        return *this;
    }
    Line& setLine(const Line& _l)
    {
        p1.x=_l.p1.x;
        p1.y=_l.p1.y;
        p2.x=_l.p2.x;
        p2.y=_l.p2.y;
        return *this;
    }
    Line(const Line& _l):p1(_l.p1),p2(_l.p2)
    {
        cout << "Line : (" << p1.x << ", " << p1.y << ") to (" << p2.x <<", " << p2.y << ") is copied." << endl;
    }
    void show(){cout<<"Line : ("<<p1.x<<", "<<p1.y<<") to ("<<p2.x<<", "<<p2.y<<")"<<endl;}
    void readLine()
    {
        double x1,x2,y1,y2;
        char c;
        cin>>x1>>c>>y1>>x2>>c>>y2;
        setLine(x1,y1,x2,y2);
    }
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1272 kb
****************************************************************/

