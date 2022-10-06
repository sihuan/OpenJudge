#include <iostream>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

class Point
{
public:
    Point()
    {
        xx=0;
        yy=0;
        cout <<setprecision(16)<<"Point : ("<<xx<<", "<<yy<<") is created."<<endl;
    }
    Point(double _x,double _y)
    {
        xx=_x;
        yy=_y;
        cout <<setprecision(16)<<"Point : ("<<xx<<", "<<yy<<") is created."<<endl;
    }
    Point(double p)
    {
        xx=p;
        yy=p;
        cout <<setprecision(16)<<"Point : ("<<xx<<", "<<yy<<") is created."<<endl;

    }
    Point(Point& another)
    {
        xx=another.xx;
        yy=another.yy;
        cout <<setprecision(16)<<"Point : ("<<xx<<", "<<yy<<") is copied."<<endl;
    }
    void show()
    {
        cout <<setprecision(16)<<"Point : ("<<xx<<", "<<yy<<")"<<endl;
    }
    ~Point()
    {
        cout <<setprecision(16)<<"Point : ("<<xx<<", "<<yy<<") is erased."<<endl;
    }
private:
    double xx,yy;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

