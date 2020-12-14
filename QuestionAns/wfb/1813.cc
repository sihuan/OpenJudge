#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

class Point {
private:
    double x_;
    double y_;
public:
    Point() : x_(0),y_(0) {
//        cout<<"The Point (0.00, 0.00) is created!"<<endl;
    }
    Point(double x,double y) : x_(x),y_(y) {
//        cout<<"The Point ("<<setprecision(2)<<fixed<<x_<<
//        ", "<<setprecision(2)<<fixed<<y_
//        <<") is created!"<<endl;
    }
    Point(const Point& p) : x_(p.getX()),y_(p.getY()) {
//        cout<<"A Point ("<<setprecision(2)<<fixed<<x_<<", "<<
//        setprecision(2)<<fixed<<y_<<") is copied!"<<endl;
    }
//    ~Point() {
//        cout<<"A Point ("<<setprecision(2)<<fixed<<x_<<", "<<
//        setprecision(2)<<fixed<<y_<<") is erased!"<<endl;
//    }
    double getX() const {return x_;}
    double getY() const {return y_;}
};
class Circle {
private:
    Point p_;
    double r_;
public:
    Circle(Point p,double r) : p_(p),r_(r) {}
    int JudgeRelation(const Circle& another) {
        double x = p_.getX() - another.p_.getX();
        double y = p_.getY() - another.p_.getY();
        double d = sqrt(x*x+y*y);
        if(d > r_+another.r_) return 1;
        else if(d == r_+another.r_) return 3;
        else if(d > fabs(r_ - another.r_)) return 5;
        else if(d == fabs(r_ - another.r_)) return 4;
        else return 2;
    }
};
int main()
{
    int cases;
    double x, y, r;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>x>>y>>r;
        Point p1(x,y);
        Circle c1(p1, r);
        cin>>x>>y>>r;
        Point p2(x, y);
        Circle c2(p2, r);
        switch(c1.JudgeRelation(c2))
        {
        case 1:
            cout<<"Outside"<<endl;
            break;
        case 2:
            cout<<"Inside"<<endl;
            break;
        case 3:
            cout<<"Externally tangent"<<endl;
            break;
        case 4:
            cout<<"Internally tangent"<<endl;
            break;
        case 5:
            cout<<"Intersection"<<endl;
        }
    }
}
/**************************************************************
	Problem: 1813
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

