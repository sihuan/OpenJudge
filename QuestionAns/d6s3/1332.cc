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
    void showNoEndOfLine() const
    {
        cout << "Point : (" << x_ << ", " << y_ << ")";
    }
    void SetPoint(double x1, double y1)
    {
        x_ = x1;
        y_ = y1;
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
    Line(const Line& a)
        : p1(a.p1)
        , p2(a.p2)
    {
        simpleshow();
        cout << " is copied." << endl;
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
    void show() const
    {
        cout << "Line : (" << p1.x() << ", " << p1.y() << ") to (" << p2.x() << ", " << p2.y() << ")" << endl;
    }
    Line& setLine(double x1, double y1, double x2, double y2)
    {
        p1.SetPoint(x1, y1);
        p2.SetPoint(x2, y2);
        return *this;
    }
    Line& setLine(const Point& a, const Point& b)
    {
        p1 = a;
        p2 = b;
        return *this;
    }
    Line& setLine(const Line& a)
    {
        p1 = a.p1;
        p2 = a.p2;
        return *this;
    }
    void readLine()
    {
        double x1, x2, y1, y2;
        char c;
        cin >> x1 >> c >> y1 >> x2 >> c >> y2;
        setLine(x1, y1, x2, y2);
    }
    const Point& start() const
    {
        return p1;
    }
    const Point& end() const
    {
        return p2;
    }
    void setStart(const Point& a)
    {
        p1 = a;
    }
    void setEnd(const Point& a)
    {
        p2 = a;
    }
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

