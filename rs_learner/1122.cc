#include<iostream>
#include<iomanip>
using namespace std;
class Point
{
    private:
        double x;
        double y;
    public:
        Point(double a,double b){x=a;y=b;cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;}
        Point(double a){x=a;y=1;cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;}
        Point(){x=0;y=0;cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;}
        Point(const Point &p);
        void show(){cout<<"Point : ("<<setprecision(16)<<x<<", "<<setprecision(16)<<y<<")"<<endl;}
        ~Point(){cout<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;}
};
Point::Point(const Point &p)
{
    x=p.x;
    y=p.y;
    cout<<"Point : ("<<x<<", "<<y<<") is copied."<<endl;
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
    }
    Point q1(q), q2(1);
    q1.show();
    q2.show();
    q.show();
}
/**************************************************************
	Problem: 1122
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

