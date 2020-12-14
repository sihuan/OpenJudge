#include<bits/stdc++.h>
using namespace std;
class Point
{
private:
    double xx,yy;
    static int sumPoint;
public:
    Point(double _x=0,double _y=0):xx(_x),yy(_y){sumPoint++;}
    ~Point(){}
    void showPoint()
    {
        cout<<"2D Point ("<<xx<<","<<yy<<")"<<endl;
    }
    double x(){return xx;}
    double y(){return yy;}
    double x(int _x){xx=_x;return xx;}
    double y(int _y){yy=_y;return yy;}
    static int showNumber(){return sumPoint;}
};
int Point::sumPoint=0;
class Point_3D:public Point
{
private:
    double zz;
    static int sumPoint_3D;
public:
    Point_3D(double _x=0,double _y=0,double _z=0):Point(_x,_y),zz(_z){sumPoint_3D++;}
    ~Point_3D(){}
    void showPoint()
    {
        cout<<"3D Point ("<<x()<<","<<y()<<","<<zz<<")"<<endl;
    }
    double z(){return zz;}
    void setPoint(double _x,double _y,double _z)
    {
        x(_x);y(_y);zz=_z;
    }
    static int showNumber(){return sumPoint_3D;}
};
int Point_3D::sumPoint_3D=0;


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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

