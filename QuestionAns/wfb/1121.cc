#include <iostream>
#include <iomanip>
using namespace std;

class Point {
    double x,y;
public:
    Point(double a,double b) {
        x = a;
        y = b;
    }
    Point(){x=0;y=0;}
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
    q.show();
}
/**************************************************************
	Problem: 1121
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

