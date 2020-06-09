#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

class Point {
        static int cnt, sum;
public:
        double x, y;
        Point(double a=0, double b=0):x(a), y(b) {
                //cout << "Point : (" << a << ", " << b << ") is created." << endl;
                cnt++; sum++;
        }
        Point(Point& c) {
                x = c.x;
                y = c.y;
                cnt++; sum++;
                //cout << "Point : (" << x << ", " << y << ") is copied." << endl;
        }
        ~Point () {
                cnt--;
                //cout << "Point : (" << x << ", " << y << ") is erased." << endl;
        }
        void showNoEndOfLine () {
                //cout << "Point : (" << x << ", " << y << ")";
        }
        void show() {
                //cout << "Point : (" << x << ", " << y << ")" << endl;
        }
        void SetPoint (Point& a) {
                x = a.x; y = a.y;
        }
        double xx () {return x;}
        double yy() {return y;}
        static void showCounter() {cout << "Current : " << cnt << " points." << endl;}
        static void showSum() {cout << "In total : " << sum << " points." << endl;}
};

int Point::cnt = 0, Point::sum = 0;

class Line {
        static int sum, cnt;
public:
        Point a, b;
        //Line () {};
        Line(double aa=0, double bb=0, double c=0, double d=0):a(aa, bb), b(c, d) {
                sum++;
                cnt++;
                //cout << "Line : (" << aa << ", " << bb << ") to (" << c << ", " << d << ") is created." << endl;
        }
        void show () {
                //cout << "Line : (" << a.x << ", " << a.y << ") to (" << b.x << ", " << b.y << ")" << endl;
        }
        Line(Point& c, Point& d):a(c), b(d) {
                sum++;
                cnt++;
                //cout << "Line : (" << a.x << ", " << a.y << ") to (" << b.x << ", " << b.y << ") is created." << endl;
        }
        Line(Line& c):a(c.a),b(c.b) {
                sum++;
                cnt++;
                //cout << "Line : (" << a.x << ", "<< a.y << ") to (" << b.x << ", " << b.y << ") is copied." << endl;
        }
        ~Line () {
                cnt--;
                //cout << "Line : (" << a.x << ", " << a.y << ") to (" << b.x << ", " << b.y << ") is erased." << endl;
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
        static void showCounter() {cout << "Current : " << cnt << " lines." << endl;}
        static void showSum() {cout << "In total : " << sum << " lines." << endl;}

};
int Line::cnt = 0, Line::sum = 0;



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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:24 ms
	Memory:1272 kb
****************************************************************/

