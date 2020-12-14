#include <cmath>
#include <iostream>
using namespace std;

class Point {
private:
    int x_, y_;
    static int numOfPoints;

public:
    Point(int x, int y)
        : x_(x)
        , y_(y)
    {
        numOfPoints++;
        cout << "The Point (" << x_ << ", " << y_ << ") is created! Now, we have " << getNumOfPoints() << " points." << endl;
    }
    Point(Point& p)
        : x_(p.x_)
        , y_(p.y_)
    {
        numOfPoints++;
        cout << "A Point (" << x_ << ", " << y_ << ") is copied! Now, we have " << getNumOfPoints() << " points." << endl;
    }
    ~Point()
    {
        numOfPoints--;
        cout << "A Point (" << x_ << ", " << y_ << ") is erased! Now, we have " << getNumOfPoints() << " points." << endl;
    }
    int getX()
    {
        return x_;
    }
    int getY()
    {
        return y_;
    }
    void show()
    {
        cout << "(" << x_ << ", " << y_ << ")";
    }
    static int getNumOfPoints()
    {
        return numOfPoints;
    }
};

class Circle {
private:
    Point center_;
    int radius_;
    static int numOfCircles;

public:
    Circle(int x, int y, int r)
        : center_(x, y)
        , radius_(r)
    {
        numOfCircles++;
        cout << "A circle at ";
        center_.show();
        cout << " and radius " << radius_ << " is created! Now, we have " << getNumOfCircles() << " circles." << endl;
    }
    Circle(Point c, int r)
        : center_(c)
        , radius_(r)
    {
        numOfCircles++;
        cout << "A circle at ";
        center_.show();
        cout << " and radius " << radius_ << " is created! Now, we have " << getNumOfCircles() << " circles." << endl;
    }
    ~Circle()
    {
        numOfCircles--;
        cout << "A circle at ";
        center_.show();
        cout << " and radius " << radius_ << " is erased! Now, we have " << getNumOfCircles() << " circles." << endl;
    }
    Point& getCenter()
    {
        return center_;
    }
    bool pointInCircle(Point& p)
    {
        if (((p.getX() - center_.getX()) * (p.getX() - center_.getX()) + (p.getY() - center_.getY()) * (p.getY() - center_.getY())) < radius_ * radius_)
            return true;
        return false;
    }
    static int getNumOfCircles()
    {
        return numOfCircles;
    }
};

int Point::numOfPoints = 0;
int Circle::numOfCircles = 0;

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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

