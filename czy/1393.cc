#include"bits/stdc++.h"
using namespace std;

int p2=0,p3=0;

class Point
{
protected:
    double xx;
    double yy;
public:
    Point():xx(0),yy(0){p2++;}
    Point(double xxx, double yyy):xx(xxx),yy(yyy){p2++;}
    double x(){return xx;}
    double y(){return yy;}
    int x(int xxx){xx=xxx;}
    int y(int yyy){yy=yyy;}
    void showPoint()
    {
        cout <<  "2D Point (" << xx << "," << yy << ")" << endl;
    }
    static int showNumber()
    {
        return p2;
    }
    //~Point(){p2--;}
};

class Point_3D : public Point
{
private:
    double zz;
public:
    Point_3D():zz(0){p3++;}
    Point_3D(double a, double b, double c):Point(a,b),zz(c){p3++;}
    double z(){return zz;}
    void z(int zzz){zz=zzz;}
    void showPoint()
    {
        cout << "3D Point (" << x() << "," <<  y() << "," << zz << ")" << endl;
    }
    static int showNumber()
    {
       return p3;
    }
    void setPoint(double a, double b, double c)
    {
        x(a);y(b);
        zz=c;
    }
     //~Point_3D(){p3--;}
};


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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

