#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;


class Point
{
public:
    Point(int _x,int _y)
    {
        x=_x;
        y=_y;
        numOfPoints++;
        printf("The Point (%d, %d) is created! Now, we have %d points.\n",x,y,numOfPoints);
    }
    Point(Point &another)
    {
        x=another.x;
        y=another.y;
        numOfPoints++;
        printf("A Point (%d, %d) is copied! Now, we have %d points.\n",x,y,numOfPoints);
    }
    static int getNumOfPoints()
    {
        return numOfPoints;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    ~Point()
    {
        numOfPoints--;
        printf("A Point (%d, %d) is erased! Now, we have %d points.\n",x,y,numOfPoints);
    }
private:
    int x,y;
    static int numOfPoints;
};
int Point::numOfPoints=0;
class Circle
{
public:
    Circle(int _x,int _y,int _r):p(_x,_y)
    {
        x=_x;
        y=_y;
        r=_r;
        numOfCircles++;
        printf("A circle at (%d, %d) and radius %d is created! Now, we have %d circles.\n",x,y,r,numOfCircles);
    }
    Circle(Point &_p,int _r):p(_p)
    {
        x=_p.getX();
        y=_p.getY();
        r=_r;
        numOfCircles++;
        Point np(p);
        printf("A circle at (%d, %d) and radius %d is created! Now, we have %d circles.\n",x,y,r,numOfCircles);
    }
    static int getNumOfCircles()
    {
        return numOfCircles;
    }
    Point &getCenter()
    {
        return p;
    }
    bool pointInCircle(Point &judge)
    {
        if((judge.getX()-x)*(judge.getX()-x)+(judge.getY()-y)*(judge.getY()-y)<r*r)
            return true;
        else
            return false;
    }
    ~Circle()
    {
        numOfCircles--;
        printf("A circle at (%d, %d) and radius %d is erased! Now, we have %d circles.\n",x,y,r,numOfCircles);
    }
private:
    int x,y,r;
    static int numOfCircles;
    Point p;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

