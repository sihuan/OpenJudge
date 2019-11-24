#include<iostream>
#include<iomanip>
using namespace std;
class Point
{
    private:
        double x;
        double y;
    public:
        Point(double a=0,double b=0){x=a;y=b;}
        //Point(){}
        void show(){cout<<"Point : ("<<setprecision(16)<<x<<", "<<setprecision(16)<<y<<")"<<endl;}
        ~Point(){}
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

