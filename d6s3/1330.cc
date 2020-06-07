#include <iostream>
using namespace std;

class Point {
private:
    double x_, y_;

public:
    Point(double x, double y)
        : x_(x)
        , y_(y)
    {
        cout << "Point : (" << x_ << ", " << y_ << ") is created." << endl;
    }
    Point()
        : x_(0)
        , y_(0)
    {
        cout << "Point : (" << x_ << ", " << y_ << ") is created." << endl;
    }
    Point(const Point& a)
        : x_(a.x_)
        , y_(a.y_)
    {
        cout << "Point : (" << x_ << ", " << y_ << ") is copied." << endl;
    }
    ~Point()
    {
        cout << "Point : (" << x_ << ", " << y_ << ") is erased." << endl;
    }
    void show()
    {
        cout << "Point : (" << x_ << ", " << y_ << ")" << endl;
    }
    void simpleshow()
    {
        cout << "(" << x_ << ", " << y_ << ")";
    }
    void SetPoint(double x1 ,double y1)
    {
        x_ = x1;
        y_ = y1;
    }
};

class Line {
private:
    Point p1, p2;

public:
    Line()
        : p1(0, 0)
        , p2(0, 0)
    {
        simpleshow();
        cout << " is created." << endl;
    }
    Line(Point& a, Point& b)
        : p1(a)
        , p2(b)
    {
        simpleshow();
        cout << " is created." << endl;
    }
    Line(double x1, double y1, double x2, double y2)
        : p1(Point(x1, y1))
        , p2(Point(x2, y2))
    {
        simpleshow();
        cout << " is created." << endl;
    }
    ~Line()
    {
        simpleshow();
        cout << " is erased." << endl;
    }
    void simpleshow()
    {
        cout << "Line : ";
        p1.simpleshow();
        cout << " to ";
        p2.simpleshow();
    }
    void show()
    {
        simpleshow();
        cout << endl;
    }
    void SetLine(double x1, double y1, double x2, double y2)
    {
        p1.SetPoint(x1, y1);
        p2.SetPoint(x2, y2);
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

