#include <iostream>
#include <iomanip>
using namespace std;

class Point {
    double x,y;
public:
    Point(double a,double b=1) {
        x = a;
        y = b;
        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
    }
//    Point(double a) {
//        x = a;
//        y = a;
//        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
//    }
    Point(const Point& q) {
        x = q.x;
        y = q.y;
        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is copied."<<endl;
    }
    Point(){
        x=0;y=0;
        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
    }
    ~Point() {
        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;
    }
    void show() {
        cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<")"<<endl;
    }
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

