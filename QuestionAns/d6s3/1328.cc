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
    }
    Point()
        : x_(0)
        , y_(0)
    {
    }
    void show()
    {
        cout << "Point : (" << x_ << ", " << y_ << ")" << endl;
    }
    void simpleshow()
    {
        cout << "(" << x_ << ", " << y_ << ")";
    }
};

class Line {
private:
    Point p1, p2;

public:
    Line(Point a, Point b)
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
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        Line line(x1, y1, x2, y2);
        line.show();
    }
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}
/**************************************************************
	Problem: 1328
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

