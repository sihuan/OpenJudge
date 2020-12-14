#include<bits/stdc++.h>
using namespace std;
class Point
{
private:
    double x,y;
public:
    Point(double _x=0,double _y=0):x(_x),y(_y){}
    ~Point(){}
    void showPoint()
    {
        cout<<"2D Point ("<<x<<","<<y<<")"<<endl;
    }
    double getx(){return x;}
    double gety(){return y;}
};
class Point_3D:public Point
{
private:
    double z;
public:
    Point_3D(double _x,double _y,double _z):Point(_x,_y),z(_z){}
    ~Point_3D(){}
    void showPoint()
    {
        cout<<"3D Point ("<<getx()<<","<<gety()<<","<<z<<")"<<endl;
    }
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

