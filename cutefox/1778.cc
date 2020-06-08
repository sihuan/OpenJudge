#include<iostream>
using namespace std;
class Point
{
private:
    int x,y;
    static int numOfPoints;
public:
    Point(int a,int b):x(a),y(b){numOfPoints++;cout<<"The Point ("<<x<<", "<<y<<") is created! Now, we have "<<numOfPoints<<" points.\n";}
    ~Point(){numOfPoints--;cout<<"A Point ("<<x<<", "<<y<<") is erased! Now, we have "<<numOfPoints<<" points.\n";}
    Point(const Point &q):x(q.x),y(q.y){numOfPoints++;cout<<"A Point ("<<x<<", "<<y<<") is copied! Now, we have "<<numOfPoints<<" points.\n";}
    static int getNumOfPoints(){return numOfPoints;}
    int getX(){return x;}
    int getY(){return y;}
};
int Point::numOfPoints=0;
class Circle
{
private:
    Point center;
    int radius;
    static int numOfCircles;
public:
    Circle(Point b,int a):center(b),radius(a){numOfCircles++;cout<<"A circle at ("<<center.getX()<<", "<<center.getY()<<") and radius "<<radius<<" is created! Now, we have "<<numOfCircles<<" circles.\n";}
    Circle(int a,int b,int c):center(a,b),radius(c){numOfCircles++;cout<<"A circle at ("<<center.getX()<<", "<<center.getY()<<") and radius "<<radius<<" is created! Now, we have "<<numOfCircles<<" circles.\n";}
    ~Circle(){numOfCircles--;cout<<"A circle at ("<<center.getX()<<", "<<center.getY()<<") and radius "<<radius<<" is erased! Now, we have "<<numOfCircles<<" circles.\n";}
   static int getNumOfCircles(){return numOfCircles;}
    Point &getCenter(){return center;}
    bool pointInCircle(Point &q)
    {
        int b=(q.getX()-center.getX())*(q.getX()-center.getX())+(q.getY()-center.getY())*(q.getY()-center.getY());
        if(b<radius*radius)
            return 1;
        return 0;
    }
};
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

