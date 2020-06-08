#include <iostream>
#include <iomanip>
using namespace std;
class Point
{
public:
    double a,b;
    Point()
    {
        a=0;
        b=0;
        cout<<setprecision(16)<<"Point : ("<<a<<", "<< b<<") is created."<<endl;

    };
    Point(const Point & p)
    {
        a=p.a;
        b=p.b;
        cout<<setprecision(16)<<"Point : ("<<a<<", "<< b<<") is copied."<<endl;

    }
    Point(double x,double y=1)
    {
        a=x;
        b=y;
        cout<<setprecision(16)<<"Point : ("<<a<<", "<< b<<") is created."<<endl;

    }
    ~Point()
    {
        cout<<setprecision(16)<<"Point : ("<<a<<", "<< b<<") is erased."<<endl;
    }
    void show()
    {
        cout<<setprecision(16)<<"Point : ("<<a<<", "<< b<<")"<<endl;
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

