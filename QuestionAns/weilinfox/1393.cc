#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include <ostream>
#include <istream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <deque>

/**********
てい先生、お疲れ様でした。
**********/

using namespace std;

class Point {
        double xx, yy;
        static int pnum;
public:
        Point (double a=0, double b=0):xx(a),yy(b) {pnum++;}
        void showPoint () {cout << "2D Point (" << xx << ',' << yy << ')' << endl;}
        static int showNumber() {/*cout << "Number of 2D Points : " << pnum << endl;*/return pnum;}
        double x () {return xx;}
        double y () {return yy;}
        void x(double a) {xx = a;}
        void y(double b) {yy = b;}
};

int Point::pnum = 0;

class Point_3D : public Point {
        double zz;
        static int pnum;
public:
        Point_3D (double x=0, double y=0, double z=0):Point(x, y),zz(z) {pnum++;}
        double z () {return zz;}
        void z(double z) {zz = z;}
        void setPoint(double a,double b,double c) {x(a); y(b); zz = c;}
        static int showNumber () {/*cout << "Number of 3D Points : " << pnum << endl;*/return pnum;}
        void showPoint() {cout << "3D Point (" << x() << ',' << y() << ',' << zz << ')' << endl;}
};

int Point_3D::pnum = 0;



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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

