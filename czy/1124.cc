#include <iostream>
#include <iomanip>
    static int num=0;
    static int sum=0;
using namespace std;

class Point
{
private:
    double a,b;

public:

    Point(double x=0,double y=0){
        a=x,b=y;
        sum++;
        num++;
        }
    Point(int x)
    {
        sum++;
        num++;
        a=x;
        b=1;
    }
    Point(Point &p)
        {
            sum++;
            num++;
            a=p.a;
            b=p.b;
        }
    void show()
    {
        cout<<setprecision(16)<<"Point : ("<<a<<", "<<b<<")"<<endl;
    }
    static void showCounter()
    {
        cout<<"Current : "<<num<<" points."<<endl;
    }
    static void showSumOfPoint()
    {
        cout<<"In total : "<<sum<<" points."<<endl;
    }
    ~Point()
    {
        num--;
    }
};

void showPoint(Point &p)
{
    Point q(p);
    q.show();
}

void showPoint(Point &p1,Point &p2,Point &p3)
{

    p1.show();
    p2.show();
    p3.show();
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

