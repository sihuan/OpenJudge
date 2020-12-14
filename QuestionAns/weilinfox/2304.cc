#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

class Point {
        double x, y;
public:
        Point (int a, int b):x(a), y(b) {}
        double operator - (Point& b) {
                //double ans;
                return sqrt((this->x - b.x)*(this->x - b.x) + (this->y - b.y)*(this->y - b.y));
        }
};

int main()
{
    Point p1(10,10);
    double x, y;
    while(cin>>x>>y)
    {
        Point p2(x, y);
        cout<<p2 - p1<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 2304
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

