#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Point {
public:
        double x, y;
        static int num, cnum;
        Point (double a=0) {num++; cnum++; x=y=a;}
        Point (double a, double b):x(a), y(b) {num++; cnum++;}
        ~Point () {num--;}
        Point (const Point& p) {num++; cnum++; x=p.x; y=p.y;}
        void show () {cout << "Point : (" << setprecision(16) << x << ", " <<setprecision(16) << y << ")" << endl;}
        static void showCounter() {cout << "Current : " << num << " points." << endl;}
        static void showSumOfPoint() {cout << "In total : " << cnum << " points." << endl;}

};
void showPoint(Point& p1, Point& p2, Point& p3) {
        p1.show();
        p2.show();
        p3.show();
}


int Point::num = 0;
int Point::cnum = 0;


int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        p.show();
        p.showCounter();
    }
    q.showSumOfPoint();
    Point q1(q), q2(1);
    Point::showCounter();
    showPoint(q1, q2, q);
    Point::showSumOfPoint();
}
/**************************************************************
	Problem: 1124
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

