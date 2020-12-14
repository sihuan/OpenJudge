#include<iostream>
#include<iomanip>
using namespace std;
class Point
{
private:
    double x,y;
    static int c;
    static int sum;
public:
    Point():x(0),y(0){c++;sum++;}
    Point(double a,double b=1):x(a),y(b){c++;sum++;}
    Point(const Point &p)
    {
        x=p.x;
        y=p.y;
        c++;
        sum++;
    }
    ~Point(){c--;}
    void show(){cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<")"<<endl;}
    static void showCounter(){cout<<setprecision(16)<<"Current : "<<c<<" points."<<endl;}
    static void showSumOfPoint(){cout<<setprecision(16)<<"In total : "<<sum<<" points."<<endl;}
};
int Point::c;
int Point::sum;
void showPoint(Point &q1,Point &q2,Point &q)
{
    q1.show();
    q2.show();
    q.show();
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

