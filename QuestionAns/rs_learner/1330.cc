#include<iostream>
using namespace std;
class Point
{
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
    double getx(){return x;}
    double gety(){return y;}
    void setx(double _x)
    {
        x=_x;
    }
    void sety(double _y)
    {
        y=_y;
    }
    ~Point()
    {
        cout<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;
    }
};
class Line
{
private:
    Point p1,p2;
public:
    Line():p1(0,0),p2(0,0){cout<<"Line : (0, 0) to (0, 0) is created."<<endl;}
    Line(double x1,double y1,double x2,double y2):p1(x1,y1),p2(x2,y2)
    {
        cout<<"Line : ("<<p1.getx()<<", "<<p1.gety()<<") to ("<<p2.getx()<<", "<<p2.gety()<<") is created."<<endl;
    }
    Line(Point& _p1,Point& _p2):p1(_p1),p2(_p2)
    {
         cout<<"Line : ("<<p1.getx()<<", "<<p1.gety()<<") to ("<<p2.getx()<<", "<<p2.gety()<<") is created."<<endl;
    }
    ~Line()
    {
         cout<<"Line : ("<<p1.getx()<<", "<<p1.gety()<<") to ("<<p2.getx()<<", "<<p2.gety()<<") is erased."<<endl;
    }
    void SetLine(double x1,double y1,double x2,double y2)
    {
        p1.setx(x1);
        p1.sety(y1);
        p2.setx(x2);
        p2.sety(y2);
    }
    void show(){cout<<"Line : ("<<p1.getx()<<", "<<p1.gety()<<") to ("<<p2.getx()<<", "<<p2.gety()<<")"<<endl;}
};
int main()
{
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num];
    for(i = 0; i < num; i++)
    {
        std::cout<<"=========================\n";
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        line[i].SetLine(x1, y1, x2, y2);
        line[i].show();
    }
    std::cout<<"=========================\n";
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}
/**************************************************************
	Problem: 1330
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1272 kb
****************************************************************/

