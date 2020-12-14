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
        Point(double a=0, double b=0):x(a), y(b) {
                cout << "Point : (" << a << ", " << b << ") is created." << endl;
        }
        Point(Point& c) {
                x = c.x;
                y = c.y;
                cout << "Point : (" << x << ", " << y << ") is copied." << endl;
        }
        ~Point () {
                cout << "Point : (" << x << ", " << y << ") is erased." << endl;
        }
        void show() {
                cout << "Point : (" << x << ", " << y << ")" << endl;
        }
};

class Line {
public:
        Point a, b;
        //Line () {};
        Line(double aa=0, double bb=0, double c=0, double d=0):a(aa, bb), b(c, d) {
                cout << "Line : (" << aa << ", " << bb << ") to (" << c << ", " << d << ") is created." << endl;
        }
        void show () {
                cout << "Line : (" << a.x << ", " << a.y << ") to (" << b.x << ", " << b.y << ")" << endl;
        }
        Line(Point& c, Point& d):a(c), b(d) {
                cout << "Line : (" << a.x << ", " << a.y << ") to (" << b.x << ", " << b.y << ") is created." << endl;
        }
        ~Line () {
                cout << "Line : (" << a.x << ", " << a.y << ") to (" << b.x << ", " << b.y << ") is erased." << endl;
        }
        void SetLine(double aa, double bb, double c, double d) {
                a.x = aa; a.y = bb; b.x = c; b.y = d;
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1272 kb
****************************************************************/

