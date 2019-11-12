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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

