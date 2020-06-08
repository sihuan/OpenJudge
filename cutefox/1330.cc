
#include <iostream>
#include <iomanip>
using namespace std;
class Point
{
    friend class Line;
private:
    double x;
    double y;
public:
    Point():x(0),y(0){cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;}
    Point(double xx,double yy):x(xx),y(yy)
    {
        cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
    }
    Point(const Point &p):x(p.x),y(p.y)
    {
        cout<<"Point : ("<<x<<", "<<y<<") is copied."<<endl;
    }
    ~Point()
    {
        cout<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;
    }
    void show()
    {
        cout<<"Point : ("<<x<<", "<<y<<")"<<endl;
    }
};
class Line
{
    friend class Point;
private:
    Point p_1,p_2;
public:
    Line():p_1(0,0),p_2(0,0)
    {
        cout<<"Line : ("<<p_1.x<<", "<<p_1.y<<") to ("<<p_2.x<<", "<<p_2.y<<") is created."<<endl;
    }
    Line(Point &m,Point &n):p_1(m),p_2(n)
    {
        cout<<"Line : ("<<p_1.x<<", "<<p_1.y<<") to ("<<p_2.x<<", "<<p_2.y<<") is created."<<endl;
    }
    Line(double a,double b,double c,double d):p_1(a,b),p_2(c,d)
    {
        cout<<"Line : ("<<p_1.x<<", "<<p_1.y<<") to ("<<p_2.x<<", "<<p_2.y<<") is created."<<endl;
    }
    ~Line()
    {
        cout<<"Line : ("<<p_1.x<<", "<<p_1.y<<") to ("<<p_2.x<<", "<<p_2.y<<") is erased."<<endl;
    }
    void show()
    {
        cout<<"Line : ("<<p_1.x<<", "<<p_1.y<<") to ("<<p_2.x<<", "<<p_2.y<<")"<<endl;
    }
    void SetLine(double a,double b,double c,double d)
    {
        p_1.x = a;
        p_1.y = b;
        p_2.x = c;
        p_2.y = d;
    }
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1272 kb
****************************************************************/

