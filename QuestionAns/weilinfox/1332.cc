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
        void showNoEndOfLine () {
                cout << "Point : (" << x << ", " << y << ")";
        }
        void show() {
                cout << "Point : (" << x << ", " << y << ")" << endl;
        }
        void SetPoint (Point& a) {
                x = a.x; y = a.y;
        }
        double xx () {return x;}
        double yy() {return y;}
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
        Line(Line& c):a(c.a),b(c.b) {
                cout << "Line : (" << a.x << ", "<< a.y << ") to (" << b.x << ", " << b.y << ") is copied." << endl;
        }
        ~Line () {
                cout << "Line : (" << a.x << ", " << a.y << ") to (" << b.x << ", " << b.y << ") is erased." << endl;
        }
        Line& setLine(double aa, double bb, double c, double d) {
                a.x = aa; a.y = bb; b.x = c; b.y = d;
                return *this;
        }
        Line& setLine (Point& c, Point& d) {
                a.x = c.x; a.y = c.y;
                b.x = d.x; b.y = d.y;
                return *this;
        }
        Line& setLine (Line& c) {
                a.SetPoint(c.a);
                b.SetPoint(c.b);
                return *this;
        }
        void readLine() {
                char ch;
                cin >> a.x >> ch >> a.y >> b.x >> ch >> b.y;
        }
        Point& start () {return a;}
        Point& end() {return b;}
        void setStart (Point& b) {
                a.SetPoint(b);
        }
        void setEnd(Point& c) {
                b.SetPoint(c);
        }
};

#define x() xx()
#define y() yy()
#define const 
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1272 kb
****************************************************************/

