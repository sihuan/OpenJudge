#include <iostream>
#include <iomanip>

using namespace std;

class Point
{
private:
    double a,b;
public:
    Point(double x=0,double y=0){
        a=x,b=y;
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<" is created."<<endl;
        }
    Point(int x)
    {
        a=x;
        b=1;
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<" is created."<<endl;
    }
    Point(Point &p)
        {
            a=p.a;
            b=p.b;
            cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<" is copied."<<endl;
        }
    void show()
    {
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<endl;
    }
    ~Point()
    {
         cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<" is erased."<<endl;
    }
};

void showPoint(Point &p)
{
    Point q(p);
    q.show();
}

void showPoint(Point &p1,Point &p2,Point &p3)
{
    Point q1(p1);
    Point q2(p2);
    Point q3(p3);
    q1.show();
    q2.show();
    q3.show();
}

int main()
{
    char c;
    double a, b;
    Point q;
    while(std::cin>>a>>c>>b)
    {
        Point p(a, b);
        showPoint(p);
    }
    Point q1(q), q2(1);
    showPoint(q1, q2, q);
}
/**************************************************************
	Problem: 1123
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

