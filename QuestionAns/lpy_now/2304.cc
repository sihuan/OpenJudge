#include<map>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<vector>
#include<iomanip>
#include<cstring>
#include<iterator>
#include<iostream>
#include<algorithm>
#define R register
#define LL long long
#define pi 3.141
#define INF 1400000000
using namespace std;

class Point {
private:
	double x_, y_;
public:
	friend double operator-(Point p1, Point p2) {
		return sqrt((p1.x_ - p2.x_) * (p1.x_ - p2.x_) + (p1.y_ - p2.y_) * (p1.y_ - p2.y_));
	}
	Point(double x_x, double y_y) {
		x_ = x_x, y_ = y_y;
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

