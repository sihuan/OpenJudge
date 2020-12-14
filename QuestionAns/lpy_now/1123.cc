#include<iostream> 
#include<iomanip> 
using namespace std; 
class Point 
{ 
private: 
    double  x,y; 
public: 
    Point(double a,double b) 
    { 
    x=a,y=b;
        cout<<"Point : ("<<setprecision(16)<<x<<", "<<setprecision(16)<<y<<")"<<" is created."<<endl; 
    } 
    Point(double q=0):x(q),y(q) 
    { 
        cout<<"Point : ("<<setprecision(16)<<x<<", "<<setprecision(16)<<y<<")"<<" is created."<<endl; 
    } 
    void show() 
    { 
        cout<<"Point : ("<<setprecision(16)<<x<<", "<<setprecision(16)<<y<<")"<<endl; 
    } 
    Point(Point &p) 
    { 
        x=p.x; 
        y=p.y; 
        cout<<"Point : ("<<setprecision(16)<<x<<", "<<setprecision(16)<<y<<")"<<" is copied."<<endl; 
    } 
    ~Point() 
    { 
        cout<<"Point : ("<<setprecision(16)<<x<<", "<<setprecision(16)<<y<<")"<<" is erased."<<endl; 
    } 
}; 
void showPoint(Point p) 
{ 
    p.show(); 
} 
void showPoint(Point q1,Point q2,Point q) 
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
        showPoint(p);
    }
    Point q1(q), q2(1);
    showPoint(q1, q2, q);
}
/**************************************************************
	Problem: 1123
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

