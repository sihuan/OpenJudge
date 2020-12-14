#include <iostream>
#include <iomanip>
using namespace std;
class Point
{
private :
    double x_,y_;
    static int total_num;
    int id;
public:
    Point(){ x_ = 0;y_ = 0;total_num++; id = total_num; }
    Point (double xx )
    {
        x_ = xx;
        y_ = xx ;
         total_num++;
         id = total_num;
    }
    Point(double xx, double yy)
    {
        x_ = xx;
        y_ = yy;
        total_num++;
        id = total_num;
    }
    Point(const Point & pt)
    {
        x_ = pt.x_;
        y_ = pt.y_;
        total_num++;
        id = total_num;
    }
    double x() const
    {
        return x_;
    }
    double y() const
    {
        return y_;
    }
    double x( double xx)
    {
        return ( x_ = xx);
    }
    double y(double yy)
    {
        return ( y_ = yy);
    }
    double getX() const
    {
        return x_;
    }
    double getY() const
    {
        return y_;
    }
    double setX(double xx)
    {
        return ( x_ = xx);
    }
    double setY(double yy)
    {
        return (y_ = yy);
    }
    Point & setPoint(double xx,double yy)
    {
        x_ = xx;
        y_ = yy;
        return *this;
    }
    void show() const
    {
          cout<<setprecision(16)<<"Point["<<id<<"] : ("<< x_ << ", " << y_ << ")" <<endl;
       //cout << "Current : " <<num << " points."  <<endl;
    }
   static void showSumOfPoint()
    {
        cout << setprecision(16) <<"In total : " <<  total_num << " points."<<endl;
    }
};
int Point::total_num;


void ShowPoint(Point p)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(double x, double y)
{
    Point p(x, y);
    cout<<std::setprecision(16)<<"Point : ("<<p.x()<<", "<<p.y()<<")"<<endl;
}

void ShowPoint(Point &p, double x, double y)
{
    cout<<std::setprecision(16)<<"Point : ("<<p.x(x)<<", "<<p.x(y)<<")"<<endl;
}

int main()
{
    int l(0);
    char c;
    double a, b;
    Point pt[60];
    while(std::cin>>a>>c>>b)
    {
        if(a == b)
            ShowPoint(pt[l].setPoint(a, b));
        if(a > b)
            ShowPoint(a, b);
        if(a < b)
            ShowPoint(pt[l], a, b);
        l++;
    }
    Point p(a), q(b);
    ShowPoint(q);
    double x(0), y(0);
    for(int i = 0; i < l; i++)
        x += pt[i].getX(), y -= pt[i].getY();
    ShowPoint(pt[l].setX(x), pt[l].setY(y));
    cout<<"==========gorgeous separator=========="<<endl;
    for(int i = 0; i <= l; i++)
        pt[i].show();
    q.setPoint(q.x() - p.x() + a, q.y() - p.y() + b).show();
    q.show();
    cout<<"==========gorgeous separator=========="<<endl;
    p.showSumOfPoint();
}

/**************************************************************
	Problem: 1125
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

