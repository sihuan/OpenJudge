#include<iostream>
#include<iomanip>
using namespace std;
class Point
{
private:
    double x,y;
public:
    Point(){x=0,y=0;}
    Point(double a,double b){x=a,y=b;}
    void show(){cout<<"Point : ("<<setprecision(16)<<x<<", "<<setprecision(16)<<y<<")"<<endl;}
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
    q.show();
}
/**************************************************************
	Problem: 1121
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1268 kb
****************************************************************/

