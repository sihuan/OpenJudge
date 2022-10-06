#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

class Point
{
public:
    Point(double _x=0,double _y=0)
    {
        xx=_x;
        yy=_y;
    }
    void set(int x,int y)
    {
        xx=x;
        yy=y;
    }
    double operator -(Point &another)
    {
        double dis;
        dis=(xx-another.xx)*(xx-another.xx)+(yy-another.yy)*(yy-another.yy);
        dis=sqrt(dis);
        return dis;
    }
private:
    double xx,yy;
};

class PointArray
{
public:
    PointArray(){}
    void append(const Point& p)
    {
        arr.insert(arr.end(),p);
    }
    double getMaxDis()
    {
        double dis=0;
        for(vector<Point>::iterator i=arr.begin();i!=(arr.end()-1);i++)
            for(vector<Point>::iterator j=(i+1);j!=arr.end();j++)
            {
                if(*i-*j>dis)
                    dis=*i-*j;
            }
        return dis;
    }
private:
    vector<Point> arr;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1284 kb
****************************************************************/

