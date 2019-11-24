#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Point
{
private:
    int x;
    int y;
    static int numOfPoints;
public:
    Point(int _x,int _y):x(_x),y(_y)
    {
        numOfPoints++;
        cout<<"The Point ("<<x<<", "<<y<<") is created! Now, we have "<<numOfPoints<<" points."<<endl;
    }
    Point(const Point &p)
    {
        x=p.x;
        y=p.y;
        numOfPoints++;
        cout<<"A Point ("<<x<<", "<<y<<") is copied! Now, we have "<<numOfPoints<<" points."<<endl;
    }
    ~Point()
    {
        numOfPoints--;
        cout<<"A Point ("<<x<<", "<<y<<") is erased! Now, we have "<<numOfPoints<<" points."<<endl;
    }
    static int getNumOfPoints(){return numOfPoints;}
    int getX(){return x;}
    int getY(){return y;}
};
class Circle
{
private:
    Point center;
    int radius;
    static int numOfCircles;
public:
    Circle(int _x,int _y,int _radius):center(_x,_y),radius(_radius)
    {
        numOfCircles++;
        cout<<"A circle at ("<<center.getX()<<", "<<center.getY()<<") and radius "<<radius<<" is created! Now, we have "<<numOfCircles<<" circles."<<endl;

    }
    Circle(Point _center,int _radius):center(_center),radius(_radius)
    {
        numOfCircles++;
        cout<<"A circle at ("<<center.getX()<<", "<<center.getY()<<") and radius "<<radius<<" is created! Now, we have "<<numOfCircles<<" circles."<<endl;
    }
    Circle(const Circle &c):center(c.center)
    {
        numOfCircles++;
    }
    ~Circle()
    {
        numOfCircles--;
        cout<<"A circle at ("<<center.getX()<<", "<<center.getY()<<") and radius "<<radius<<" is erased! Now, we have "<<numOfCircles<<" circles."<<endl;
    }
    static int getNumOfCircles(){return numOfCircles;}
    Point &getCenter(){return center;}
    int pointInCircle(Point &p)
    {
        double d;
        d=sqrt(((p.getX()-center.getX())*(p.getX()-center.getX()))+((p.getY()-center.getY())*(p.getY()-center.getY())));
        if(d<radius)
            return 1;
        else
            return 0;
    }
};
int Point::numOfPoints=0;
int Circle::numOfCircles=0;
int main()
{
    int cases,num;
    int x, y, r, px, py;
    Point aPoint(0,0), *bPoint;
    Circle aCircle(1,1,1);
    cin>>cases;
    cout<<"We have "<<Point::getNumOfPoints()<<" points and "<<Circle::getNumOfCircles()<<" circles now."<<endl;
    for (int i = 0; i < cases; i++)
    {
        cin>>x>>y>>r;
        bPoint = new Point(x,y);
        Circle circle(*bPoint, r);
        cin>>num;
        for (int j = 0; j < num; j++)
        {
            cin>>px>>py;
            if (circle.pointInCircle(*(new Point(px, py))))
            {
                cout<<"("<<px<<", "<<py<<") is in the circle at (";
                cout<<circle.getCenter().getX()<<", "<<circle.getCenter().getY()<<")."<<endl;
            }
            else
            {
                cout<<"("<<px<<", "<<py<<") is not in the circle at (";
                cout<<circle.getCenter().getX()<<", "<<circle.getCenter().getY()<<")."<<endl;
            }
        }
        delete bPoint;
    }
    cout<<"We have "<<Point::getNumOfPoints()<<" points, and "<<Circle::getNumOfCircles()<<" circles."<<endl;
    return 0;
}
/**************************************************************
	Problem: 1778
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1280 kb
****************************************************************/

