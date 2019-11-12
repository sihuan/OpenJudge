#include<iostream>
using namespace std;
class Point{
public:
    int x,y;
    static int numOfPoints;
    Point(int a=0,int b=0):x(a),y(b){numOfPoints++;cout<<"The Point ("<<x<<", "<<y<<") is created! Now, we have "<<numOfPoints<<" points."<<endl;}
    ~Point(){numOfPoints--;cout<<"A Point ("<<x<<", "<<y<<") is erased! Now, we have "<<numOfPoints<<" points."<<endl;}
    Point(const Point&p){numOfPoints++;x=p.x;y=p.y;cout<<"A Point ("<<x<<", "<<y<<") is copied! Now, we have "<<numOfPoints<<" points."<<endl;}
    static int getNumOfPoints(){return numOfPoints;}
    int getX(){return x;}
    int getY(){return y;}

};
class Circle{
public:
    Point center;
    int radius;
    static int numOfCircles;
    Circle(int a,int b,int c):center(a,b),radius(c){numOfCircles++;cout<<"A circle at ("<<center.x<<", "<<center.y<<") and radius "<<radius<<" is created! Now, we have "<<numOfCircles<<" circles."<<endl;}
    Circle(Point p,int r):center(p),radius(r){numOfCircles++;cout<<"A circle at ("<<center.x<<", "<<center.y<<") and radius "<<radius<<" is created! Now, we have "<<numOfCircles<<" circles."<<endl;}
    ~Circle(){numOfCircles--;cout<<"A circle at ("<<center.x<<", "<<center.y<<") and radius "<<radius<<" is erased! Now, we have "<<numOfCircles<<" circles."<<endl;}
    Circle(const Circle &c){numOfCircles++;center.x=c.center.x;center.y=c.center.y;radius=c.radius;cout<<"A circle at ("<<center.x<<", "<<center.y<<") and radius "<<radius<<" is created! Now, we have "<<numOfCircles<<" circles."<<endl;}
    static int getNumOfCircles(){return numOfCircles;}
    Point &getCenter(){return center;}
    bool pointInCircle(Point &p){if((p.x-center.x)*(p.x-center.x)+(p.y-center.y)*(p.y-center.y)<radius*radius) return true;else return false;}
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

