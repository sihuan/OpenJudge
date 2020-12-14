#include <iostream>
#include <iomanip>
using namespace std;

class Point {
    double x,y;
public:
    static int cnt;
    static int cur_cnt;
    Point(double a,double b=1) {
        ++cnt;
        ++cur_cnt;
        x = a;
        y = b;
//        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
    }
//    Point(double a) {
//        x = a;
//        y = a;
//        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
//    }
    Point(const Point& q) {
        ++cnt;
        ++cur_cnt;
        x = q.x;
        y = q.y;
//        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is copied."<<endl;
    }
    Point(){
        ++cnt;
        ++cur_cnt;
        x=0;y=0;
//        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
    }
    ~Point() {
        --cur_cnt;
//        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;
    }
    void show() {
        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<")"<<endl;
    }
    static void showCounter() {
        cout<<"Current : "<<cur_cnt<<" points."<<endl;
    }
    static void showSumOfPoint() {
        cout<<"In total : "<<cnt<<" points."<<endl;
    }
};
void  showPoint(Point q) {
    --Point::cnt;
    --Point::cur_cnt;
    q.show();
}
void  showPoint(Point q1,Point q2,Point q3) {
    Point::cnt -= 3;
    Point::cur_cnt -= 3;
    q1.show();
    q2.show();
    q3.show();
}
int Point::cnt = 0;
int Point::cur_cnt = 0;

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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

