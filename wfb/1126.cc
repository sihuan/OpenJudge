#include <iostream>
#include <iomanip>
using namespace std;

class Point {
    double x1,y1;
    double cur_cnt;
public:
    static int cnt;
    Point(double a,double b) {
        ++cnt;
        cur_cnt = cnt;
        x1 = a;
        y1 = b;
    }
    Point(double a) {
        ++cnt;
        cur_cnt = cnt;
        x1 = a;
        y1 = a;
    }
    Point(const Point& q) {
        ++cnt;
        cur_cnt = cnt;
        x1 = q.x1;
        y1 = q.y1;
    }
    Point(){
        ++cnt;
        cur_cnt = cnt;
        x1=0;y1=0;
    }
    double x() const {
        return x1;
    }
    double y() const {
        return y1;
    }
    double x(double a) {
        x1 = a;
        return a;
    }
    double y(double b) {
        y1 = b;
        return b;
    }
    double getX() {
        return x1;
    }
    double getY() {
        return y1;
    }
    double setX(double a) {
        x1 = a;
        return a;
    }
    double setY(double b) {
        y1 = b;
        return b;
    }
    Point& setPoint(double a,double b) {
        x1 = a;
        y1 = b;
        return *this;
    }
    void show() const {
        cout<<setprecision(16)<<"Point["<<cur_cnt<<"] : ("<<x1<<", "<<y1<<")"<<endl;
    }
    static void showSumOfPoint() {
        cout<<"In total : "<<cnt<<" points."<<endl;
    }
    bool isEqual(const Point& q) const {
        if(q.x1 == x1 && q.y1==y1) return true;
        else return false;
    }
    Point& copy(const Point& q) {
        x1 = q.x1;
        y1 = q.y1;
        return *this;
    }
    Point& inverse() {
        double tmp;
        tmp = x1;
        x1 = y1;
        y1 = tmp;
        return *this;
    }
    Point& inverse(const Point& q) {
        x1 = q.y1;
        y1 = q.x1;
        return *this;
    }
};
int Point::cnt = 0;

void ShowPoint(const Point& p)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(double x, double y)
{
//    Point p(x, y);
    cout<<std::setprecision(16)<<"Point : ("<<x<<", "<<y<<")"<<endl;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

