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
     Line(const Line &t):p_1(t.p_1),p_2(t.p_2)
    {
        cout << "Line : (" << p_1.x << ", " << p_1.y << ") to (" << p_2.x <<", " << p_2.y << ") is copied." << endl;
    }
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
    void setLine(double a,double b,double c,double d)
    {
        p_1.x = a;
        p_1.y = b;
        p_2.x = c;
        p_2.y = d;
    }
    Line &setLine(const Line &l)
    {
        p_1.x = l.p_1.x;
        p_1.y = l.p_1.y;
        p_2.x = l.p_2.x;
        p_2.y = l.p_2.y;
        return *this;
    }
    Line &setLine(const Point &p,const Point &q)
    {
        p_1.x = p.x;
        p_1.y = p.y;
        p_2.x = q.x;
        p_2.y = q.y;
        return *this;
    }
    void readLine()
    {
        double x1, y1, x2, y2;
        char c;
        cin >> x1 >> c >> y1 >> x2 >> c >> y2;
        setLine(x1, y1, x2, y2);
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1272 kb
****************************************************************/

