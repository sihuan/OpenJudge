#include <iomanip>
#include <iostream>
using namespace std;

int cnt, sum;

class Point {
  public:
    Point(double a, double b) {
        x_ = a;
        y_ = b;
        cnt++;
        sum++;
    }
    Point() {
        x_ = y_ = 0;
        cnt++;
        sum++;
    }
    Point(double a) {
        x_ = y_ = a;
        cnt++;
        sum++;
    }
    Point(const Point &a) {
        x_ = a.x_;
        y_ = a.y_;
        cnt++;
        sum++;
    }
    ~Point() { cnt--; }
    void show() {
        cout << setprecision(16);
        cout << "Point : (" << x_ << ", " << y_ << ")" << endl;
    }
    static void showCounter() {
        cout << "Current : " << cnt << " points." << endl;
    }
    static void showSumOfPoint() {
        cout << "In total : " << sum << " points." << endl;
    }

  private:
    double x_, y_;
};

void showPoint(Point a, Point b, Point c) {
    a.show();
    b.show();
    c.show();
    cnt -= 3;
    sum -= 3;
}
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

