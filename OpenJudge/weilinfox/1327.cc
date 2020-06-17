#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

class Point {
public:
        double x, y;
        Point(double a=0, double b=0):x(a), y(b) {}
        Point(Point& c) {
                x = c.x;
                y = c.y;
        }
        void show() {
                cout << "Point : (" << x << ", " << y << ")" << endl;
        }
};

class Line {
public:
        Point a, b;
        Line(double aa, double bb, double c, double d):a(aa, bb), b(c, d) {}
        void show () {
                cout << "Line : (" << a.x << ", " << a.y << ") to (" << b.x << ", " << b.y << ")" << endl;
        }
        Line(Point c, Point d):a(c), b(d) {}
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
	Problem: 1327
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

