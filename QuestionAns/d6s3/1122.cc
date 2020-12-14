#include <iomanip>
#include <iostream>
using namespace std;

class Point {
  public:
    Point(double a, double b) {
        x_ = a;
        y_ = b;
        cout << setprecision(16);
        cout << "Point : (" << x_ << ", " << y_ << ") is created." << endl;
    }
    Point() {
        x_ = y_ = 0;
        cout << setprecision(16);
        cout << "Point : (" << x_ << ", " << y_ << ") is created." << endl;
    }
    Point(double a) {
        x_ = y_ = a;
        cout << setprecision(16);
        cout << "Point : (" << x_ << ", " << y_ << ") is created." << endl;
    }
    Point(const Point &a) {
        x_ = a.x_;
        y_ = a.y_;
        cout << setprecision(16);
        cout << "Point : (" << x_ << ", " << y_ << ") is copied." << endl;
    }
    ~Point() {
        cout << setprecision(16);
        cout << "Point : (" << x_ << ", " << y_ << ") is erased." << endl;
    }
    void show() {
        cout << setprecision(16);
        cout << "Point : (" << x_ << ", " << y_ << ")" << endl;
    }

  private:
    double x_, y_;
};

int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        p.show();
    }
    Point q1(q), q2(1);
    q1.show();
    q2.show();
    q.show();
}
/**************************************************************
	Problem: 1122
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

