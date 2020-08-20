#include <iostream>
#include <algorithm>
#include <iomanip>
#include <typeinfo>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

class Point {
public:
    double x, y;
    Point(double a=0, double b=0):x(a), y(b) {}
    void set (double a, double b) {x = a; y = b;}
    double operator-(const Point p) {
        return sqrt((p.x-x)*(p.x-x)+(p.y-y)*(p.y-y));
    }
};

class PointArray {
public:
    Point arr[10000], maxp, minp;
    int num;
    PointArray() {num = 0;}
    void append (Point& p) {
        arr[num]=p;
        if (!num) maxp = minp = p;
        else {
            if (p-maxp > minp-maxp)
                minp = p;
            else if (p-minp > maxp-minp)
                maxp = p;
        }
        num++;
    }
    double getMaxDis () {return maxp - minp;}
};

int main()
{
    Point p, p1(10, 10), p2(20, 20);
    PointArray pArr;
    double x, y;
    while(cin>>x>>y)
    {
        p.set(x, y);
        pArr.append(p);
    }
    cout<<p2 - p1<<endl;
    cout<<pArr.getMaxDis()<<endl;
    return 0;
}
/**************************************************************
	Problem: 2065
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1364 kb
****************************************************************/

