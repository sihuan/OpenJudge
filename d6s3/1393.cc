#include <iostream>
using namespace std;

class Point {
protected:
    int x_, y_;
    static int p2d_;

public:
    Point()
        : x_(0)
        , y_(0)
    {
        p2d_++;
    }
    Point(int x, int y)
        : x_(x)
        , y_(y)
    {
        p2d_++;
    }
    int x()
    {
        return x_;
    }
    int y()
    {
        return y_;
    }
    int x(int x)
    {
        x_ = x;
        return x_;
    }
    int y(int y)
    {
        y_ = y;
        return y_;
    }
    void showPoint()
    {
        cout << "2D Point (" << x_ << "," << y_ << ")" << endl;
    }
    static int showNumber()
    {
        return p2d_;
    }
};

class Point_3D : public Point {
private:
    int z_;
    static int p3d_;

public:
    Point_3D()
        : z_(0)
    {
        p3d_++;
    }
    Point_3D(int x, int y, int z)
        : Point(x, y)
        , z_(z)
    {
        p3d_++;
    }
    double z()
    {
        return z_;
    }
    double z(int z)
    {
        return z_ = z;
    }
    void showPoint()
    {
        cout << "3D Point (" << x_ << "," << y_ << "," << z_ << ")" << endl;
    }
    void setPoint(double x, double y, double z)
    {
        Point::x_ = x;
        Point::y_ = y;
        z_ = z;
    }
    static int showNumber()
    {
        return p3d_;
    }
};

int Point::p2d_ = 0;
int Point_3D::p3d_ = 0;


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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

