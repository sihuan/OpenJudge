#include <iostream>
using namespace std;

int cp, sp, cl, sl;

class Point {
private:
    double x_, y_;

public:
    Point(double x, double y)
        : x_(x)
        , y_(y)
    {
        cp++;
        sp++;
    }
    Point()
        : x_(0)
        , y_(0)
    {
        cp++;
        sp++;
    }
    Point(const Point& a)
        : x_(a.x_)
        , y_(a.y_)
    {
        cp++;
        sp++;
    }
    ~Point()
    {
        cp--;
    }
    void SetPoint(double x1, double y1)
    {
        x_ = x1;
        y_ = y1;
    }
    static void showCounter()
    {
        cout << "Current : " << cp << " points." << endl;
    }
    static void showSum()
    {
        cout << "In total : " << sp << " points." << endl;
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
        cl++;
        sl++;
    }
    Line(Point& a, Point& b)
        : p1(a)
        , p2(b)
    {
        cl++;
        sl++;
    }
    Line(double x1, double y1, double x2, double y2)
        : p1(Point(x1, y1))
        , p2(Point(x2, y2))
    {
        cl++;
        sl++;
    }
    Line(const Line& a)
        : p1(a.p1)
        , p2(a.p2)
    {
        cl++;
        sl++;
    }
    ~Line()
    {
        cl--;
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
    static void showCounter()
    {
        cout << "Current : " << cl << " lines." << endl;
    }
    static void showSum()
    {
        cout << "In total : " << sl << " lines." << endl;
    }
};

int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.showCounter();
    t.showSum();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        Line *l1, l2;
        l1->showCounter();
        l1->showSum();
        l1 = new Line(p, q);
        line[i].readLine();
        p.showCounter();
        p.showSum();
        delete l1;
        l2.showCounter();
        l2.showSum();
        q.showCounter();
        q.showSum();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    Line::showCounter();
    Line::showSum();
    Point::showCounter();
    Point::showSum();
    Line *l = new Line[num];
    l4.showCounter();
    l4.showSum();
    delete[] l;
    t.showCounter();
    t.showSum();
}

/**************************************************************
	Problem: 1333
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

