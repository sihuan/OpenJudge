#include<iostream>
#include<iomanip>
using namespace std;
class Point
{
    private:
        double x,y;
    public:
        Point(double a,double b=1):x(a),y(b){cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is created."<<endl;}
        Point():x(0),y(0){cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is created."<<endl;}

        Point(const Point &p)
        {
            x=p.x;
            y=p.y;
            cout<<setprecision(16)<<"Point : ("<<p.x<<", "<<p.y<<") is copied."<<endl;
        }
        ~Point(){cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;}
        void show(){cout<<setprecision(16)<<"Point : ("<<x<<", "<<y<<")"<<endl;}
};
void showPoint(Point q1,Point q2,Point q)
{
    q1.show();
    q2.show();
    q.show();
}
void showPoint(Point q1)
{
    q1.show();
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

