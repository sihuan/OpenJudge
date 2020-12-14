#include <iostream>
#include <deque>

using namespace std;

class Point{
public:
    Point(){}
    Point(double x,double y) : x_(x),y_(y){}
    void showPoint(){cout<<"2D Point ("<<x_<<","<<y_<<")"<<endl;}
protected:
    double x_;
    double y_;
};
class Point_3D:public Point{
public:
    Point_3D(){}
    Point_3D(double x,double y,double z) : Point(x,y),z_(z){}
    void showPoint(){cout<<"3D Point ("<<x_<<","<<y_<<","<<z_<<")"<<endl;}
private:
    double z_;
};
int main()
{
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
}

/**************************************************************
	Problem: 1571
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

