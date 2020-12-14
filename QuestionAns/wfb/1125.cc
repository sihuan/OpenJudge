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
    double x() {
        return x1;
    }
    double y() {
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
    void show() {
        cout<<setprecision(16)<<"Point["<<cur_cnt<<"] : ("<<x1<<", "<<y1<<")"<<endl;
    }
    static void showSumOfPoint() {
        cout<<"In total : "<<cnt<<" points."<<endl;
    }
};
int Point::cnt = 0;
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

