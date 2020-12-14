#include <iomanip>
#include <iostream>
using namespace std;

class Point {
  public:
    Point(double a, double b) {
        x_ = a;
        y_ = b;
    }
    Point() { x_ = y_ = 0; }
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
    q.show();
}
/**************************************************************
	Problem: 1121
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

