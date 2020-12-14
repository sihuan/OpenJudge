#include <iostream>

using namespace std;

class Point{
public:
    static int cnt_2d;
    Point() : x_(0),y_(0){++cnt_2d;}
    Point(double x,double y) : x_(x),y_(y){++cnt_2d;}
    double x() const {return x_;}
    double y() const {return y_;}
    double x(int xx) {return x_=xx;}
    double y(int yy) {return y_=yy;}
    void showPoint() const {cout<<"2D Point ("<<x_<<","<<y_<<")"<<endl;}
    static int showNumber() {return cnt_2d;}
protected:
    double x_;
    double y_;
};
class Point_3D:public Point{
public:
    static int cnt_3d;
    Point_3D() : z_(0){++cnt_3d;}
    Point_3D(double x,double y,double z) :Point(x,y),z_(z){++cnt_3d;}
    void showPoint() const {cout<<"3D Point ("<<x_<<","<<y_<<","<<z_<<")"<<endl;}
    double z() const {return z_;}
    double z(int zz) {return z_=zz;}
    void setPoint(double xx,double yy,double zz){Point::x_=xx; Point::y_=yy; z_=zz;}
    static int showNumber() {return cnt_3d;}
private:
    double z_;
};
int Point::cnt_2d = 0;
int Point_3D::cnt_3d = 0;

int main()
{
    cout<<"Invariable test output :"<<endl;
    Point_3D p3d;
    p3d.setPoint(-100, 0, 100);
    p3d.showPoint();
    p3d.x(0);
    p3d.y(100);
    cout<<"Point ("<<p3d.x()<<","<<p3d.y()<<","<<p3d.z()<<")"<<endl;
    cout<<"\nTest data output :"<<endl;
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; i++)
    {
        double x, y, z;
        int point_type;
        cin>>point_type;
        if(point_type == 2)
        {
            cin>>x>>y;
            Point p(x, y);
            p.showPoint();
        }
        if(point_type == 3)
        {
            cin>>x>>y>>z;
            Point_3D p(x, y, z);
            p.showPoint();
        }
    }
    cout<<"Number of 2D Points : "<<Point::showNumber() - Point_3D::showNumber()<<endl;
    cout<<"Number of 3D Points : "<<Point_3D::showNumber() - 1<<endl;
}

/**************************************************************
	Problem: 1393
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

