#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
class Point
{
public:
    double x,y;
    Point()
    {
        x=0;
        y=0;
        cout<<setprecision(2)<<fixed<<"The Point ("<<x<<", "<<y<<") is created!"<<endl;

    }
    Point(double a,double b):x(a),y(b)
    {
        cout<<setprecision(2)<<fixed<<"The Point ("<<x<<", "<<y<<") is created!"<<endl;
    }
    Point(const Point & a):x(a.x),y(a.y)
    {
        cout<<setprecision(2)<<fixed<<"A Point ("<<x<<", "<<y<<") is copied!"<<endl;

    }
    ~Point()
    {
        cout<<setprecision(2)<<fixed<<"A Point ("<<x<<", "<<y<<") is erased!"<<endl;
    }
    double getX()
    {
        return x;
    }
    double getY()
    {
        return y;
    }

};
class Graph
{
public:
    Point *p;
    int num;
    static double c,d;
        Graph():p(NULL),num(0){cout<<"A graph with "<<num<<" points is created!"<<endl;}
     Graph(Point *a,int b)
    {
        p=new Point[b];
        for(int i=0;i<b;i++)
        {
            p[i]=a[i];
        }
        num=b;
        cout<<"A graph with "<<num<<" points is created!"<<endl;
    }
    ~Graph()
    {
        delete[] p;
        cout<<setprecision(2)<<fixed<<"A graph with "<<num<<" points is erased!"<<endl;
    }
    Point getCentroid()
    {
        double c=0;
        double d=0;
        for(int i=0; i<num; i++)
        {
            c=c+p[i].x;
            d=d+p[i].y;
        }
        c=c/num;
        d=d/num;
        Point *p2=new Point(c,d);
        return *p2;
    }
};
int main()
{
    int cases,num;
    double x, y;
    Point centroid;
    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>num;
        Point points[num];
        for (int j = 0; j < num; j++)
        {
            cin>>x>>y;
            points[j] = *(new Point(x, y));
        }
        Graph graph(points, num);
        centroid = graph.getCentroid();
        cout<<setprecision(2)<<fixed<<"The centroid is ("<<centroid.getX()<<", "<<centroid.getY()<<")."<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1779
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

