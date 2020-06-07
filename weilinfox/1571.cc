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

using namespace std;

class Point {
        double x, y;
public:
        Point (double a=0, double b=0):x(a),y(b) {}
        void showPoint () {cout << "2D Point (" << x << ',' << y << ')' << endl;}
        double getx () {return x;}
        double gety () {return y;}
};

class Point_3D : public Point {
        double z;
public:
        Point_3D (double x=0, double y=0, double z=0):Point(x, y),z(z) {}
        void showPoint() {cout << "3D Point (" << getx() << ',' << gety() << ',' << z << ')' << endl;}
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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1268 kb
****************************************************************/

