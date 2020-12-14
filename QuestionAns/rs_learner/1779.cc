#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
class Point
{
private:
    double x,y;
public:
    Point(double _x=0,double _y=0):x(_x),y(_y)
    {
        cout<<fixed<<setprecision(2)<<"The Point ("<<x<<", "<<y<<") is created!"<<endl;
    }
    Point(const Point &p)
    {
        x=p.x;
        y=p.y;
        cout<<fixed<<setprecision(2)<<"A Point ("<<x<<", "<<y<<") is copied!"<<endl;
    }
    ~Point(){cout<<fixed<<setprecision(2)<<"A Point ("<<x<<", "<<y<<") is erased!"<<endl;}
    double getX(){return x;}
    double getY(){return y;}
};
class Graph
{
private:
    Point *point;
    int numOfPoints;
public:
    Graph()
    {
        point=NULL;
        numOfPoints=0;
        cout<<"A graph with "<<numOfPoints<<" points is created!"<<endl;
    }
    Graph(Point *p,int num)
    {
        numOfPoints=num;
        point=new Point[numOfPoints];
        for(int i=0;i<num;i++)
        {
            point[i]=p[i];
        }
        cout<<"A graph with "<<numOfPoints<<" points is created!"<<endl;
    }
    ~Graph(){delete []point;cout<<"A graph with "<<numOfPoints<<" points is erased!"<<endl;}
    Point getCentroid()
    {
        Point *a;
        int i,j;
        double _x=0,_y=0,x,y;
        for(i=0;i<numOfPoints;i++)
        {
            _x+=(*(point+i)).getX();
            _y+=(*(point+i)).getY();
        }
        x=_x/numOfPoints;
        y=_y/numOfPoints;
        a=new Point(x,y);
        return *a;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

