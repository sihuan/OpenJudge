#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>
#include<ctype.h>
using namespace std;
int rec=0;
class  Point
{
private:
    double xx,yy;
public:
    Point():xx(0),yy(0)
    {
        cout<<"The Point ("<<setprecision(2)<<fixed<<xx<<", "<<setprecision(2)<<fixed<<yy<<") is created!"<<endl;
    }
    Point(double x,double y):xx(x),yy(y)
    {
        x = xx;
        y = yy;
        cout<<"The Point ("<<setprecision(2)<<fixed<<xx<<", "<<setprecision(2)<<fixed<<yy<<") is created!"<<endl;
    }
    ~Point()
    {
        cout<<"A Point ("<<setprecision(2)<<fixed<<xx<<", "<<setprecision(2)<<fixed<<yy<<") is erased!"<<endl;
    }
    Point(const Point &p)
    {
        xx = p.xx;
        yy = p.yy;
        cout<<"A Point ("<<setprecision(2)<<fixed<<xx<<", "<<setprecision(2)<<fixed<<yy<<") is copied!"<<endl;
    }
     double getX()
    {
        return xx;
    }
    double getY()
    {
        return yy;
    }
    void setX(double m)
    {
        xx = m;
    }
    void setY(double n)
    {
        yy = n;
    }
    friend class Graph;
};

class Graph
{
    friend class Point;
private:
    Point *points;
    int numOfPoints;
public:
    Graph()
    {
        points = NULL;
        numOfPoints = 0;
        cout<<"A graph with "<<numOfPoints<<" points is created!"<<endl;
    }
    Graph(Point *p,int n)
    {
        points = new Point[n];
        for(int i=0;i<n;i++)
        {
            points[i] = p[i];
        }
        numOfPoints = n;
        cout<<"A graph with "<<numOfPoints<<" points is created!"<<endl;
    }
    ~Graph()
    {
        delete []points;
        cout<<"A graph with "<<numOfPoints<<" points is erased!"<<endl;
    }
    Point getCentroid()
    {
        int i;
        double a = 0,b = 0;
        for(int i=0;i<numOfPoints;i++)
        {
            a += points[i].getX();
            b += points[i].getY();
        }
        double tmp1 = a/numOfPoints;
        double tmp2 = b/numOfPoints;
        Point *p = new Point(tmp1,tmp2);
        return *p;
    }
} ;

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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

