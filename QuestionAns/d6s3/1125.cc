#include <iomanip>
#include <iostream>
using namespace std;

int sum;

class Point {
  public:
    Point(double a, double b) {
        x_ = a;
        y_ = b;
        sum++;
        pvl = sum;
    }
    Point() {
        x_ = y_ = 0;
        sum++;
        pvl = sum;
    }
    Point(double a) {
        x_ = y_ = a;
        sum++;
        pvl = sum;
    }
    Point(const Point& a) {
        x_ = a.x_;
        y_ = a.y_;
        sum++;
        pvl = sum;
    }
    double x() {
        return x_;
    }
    double y() {
        return y_;
    }
    double x(double a) {
        x_ = a;
        return x_;
    }
    double y(double a) {
        y_ = a;
        return y_;
    }
    double getX() {
        return x_;
    }
    double getY() {
        return y_;
    }
    double setX(double a) {
        x_ = a;
        return x_;
    }
    double setY(double a) {
        y_ = a;
        return y_;
    }
    void show() {
        cout << setprecision(16);
        cout << "Point[" << pvl << "] : (" << x_ << ", " << y_ << ")" << endl;
    }
    Point& setPoint(double x,double y) {
        x_ = x;
        y_ = y;
        return *this;
    }
    static void showSumOfPoint() {
        cout << "In total : " << sum << " points." << endl;
    }

  private:
    double x_, y_;
    int pvl;
};
void ShowPoint(Point p)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(double x, double y)
{
    Point p(x, y);
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(Point &p, double x, double y)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x(x)<<", "<<p.x(y)<<")"<<endl;
}

int main()
{
    int l(0);
    char c;
    double a, b;
    Point pt[60];
    while(std::cin>>a>>c>>b)
    {
        if(a == b)
            ShowPoint(pt[l].setPoint(a, b));
        if(a > b)
            ShowPoint(a, b);
        if(a < b)
            ShowPoint(pt[l], a, b);
        l++;
    }
    Point p(a), q(b);
    ShowPoint(q);
    double x(0), y(0);
    for(int i = 0; i < l; i++)
        x += pt[i].getX(), y -= pt[i].getY();
    ShowPoint(pt[l].setX(x), pt[l].setY(y));
    cout<<"==========gorgeous separator=========="<<endl;
    for(int i = 0; i <= l; i++)
        pt[i].show();
    q.setPoint(q.x() - p.x() + a, q.y() - p.y() + b).show();
    q.show();
    cout<<"==========gorgeous separator=========="<<endl;
    p.showSumOfPoint();
}

/**************************************************************
	Problem: 1125
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

