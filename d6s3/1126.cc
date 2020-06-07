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
    double x() const { return x_; }
    double y() const { return y_; }
    double x(double x) {
        x_ = x;
        return x_;
    }
    double y(double y) {
        y_ = y;
        return y_;
    }
    void show() const {
        cout << setprecision(16);
        cout << "Point[" << pvl << "] : (" << x_ << ", " << y_ << ")" << endl;
    }
    Point& setPoint(double x, double y) {
        x_ = x;
        y_ = y;
        return *this;
    }
    bool isEqual(const Point& a) const {
        if (a.x_ == x_ && a.y_ == y_)
            return true;
        return false;
    }
    Point& copy(const Point& a) {
        x_ = a.x_;
        y_ = a.y_;
        return *this;
    }
    Point& inverse() {
        double t;
        t = x_;
        x_ = y_;
        y_ = t;
        return *this;
    }
    Point& inverse(const Point& a) {
        x_ = a.y_;
        y_ = a.x_;
        return *this;
    }

    static void showSumOfPoint() {
        cout << "In total : " << sum << " points." << endl;
    }

  private:
    double x_, y_;
    int pvl;
};

void ShowPoint(const Point& p)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(double x, double y)
{
    cout<<std::setprecision(16)<<"Point : ("<< x <<", "<< y <<")"<<endl;
}
int main()
{
    int l(0);
    char c;
    double a, b;
    Point p, q, pt[60];
    while(std::cin>>a>>c>>b)
    {
        if(a == b)
            p.copy(pt[l].setPoint(a, b));
        if(a > b)
            p.copy(pt[l].setPoint(a, b).inverse());
        if(a < b)
            p.inverse(pt[l].setPoint(a, b));
        if(a < 0)
            q.copy(p).inverse();
        if(b < 0)
            q.inverse(p).copy(pt[l]);
        pt[l++].show();
        p.show();
    }
    q.show();
    cout<<"==========gorgeous separator=========="<<endl;
    double x(0), y(0);
    for(int i = 0; i < l; i++)
        x += pt[i].x(), y -= pt[i].y();
    pt[l].x(y), pt[l].y(x);
    q.copy(pt[l]).show();
    for(int i = 0; i <= l; i++)
        pt[i].show();
    cout<<"==========gorgeous separator=========="<<endl;
    const Point const_point(3, 3);
    const_point.show();
    for(int i = 0; i <= l; i++)
    {
        if(const_point.isEqual(pt[i]))
        {
            ShowPoint(const_point);
            ShowPoint(const_point.x(), const_point.y());
            ShowPoint(Point(const_point.x(), const_point.y()));
        }
    }
    const_point.showSumOfPoint();
}

/**************************************************************
	Problem: 1126
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

