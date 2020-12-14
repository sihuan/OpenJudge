#include <iostream>
 
using namespace std;
class Point
{
private:
    int x,y;
    static int numOfPoints;
public:
    Point(int _x = 0,int _y = 0)
    {
        x = _x;
        y = _y;
        numOfPoints++;
        cout << "The Point ("<< x <<", "<< y <<") is created! Now, we have "<< numOfPoints <<" points." << endl;
    }
    Point(const Point &k)
    {
        x = k.x;
        y = k.y;
        numOfPoints++;
        cout << "A Point ("<< x <<", "<< y <<") is copied! Now, we have "<< numOfPoints <<" points." << endl;
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
        cout << "A Point ("<< x <<", "<< y <<") is erased! Now, we have "<< numOfPoints <<" points." << endl;
    }
};
int Point::numOfPoints = 0;
class Circle
{
private:
    Point center;
    static int numOfCircles;
    int radius;
public:
    Circle(int _x,int _y,int _r):center(_x,_y)
    {
        radius = _r;
        numOfCircles++;
        cout << "A circle at ("<< center.getX() <<", "<< center.getY() <<") and radius "<< radius <<" is created! Now, we have "<< numOfCircles <<" circles." << endl;
    }
    Circle(Point _c,int _r):center(_c)
    {
        radius = _r;
        numOfCircles++;
         cout << "A circle at ("<< center.getX() <<", "<< center.getY() <<") and radius "<< radius <<" is created! Now, we have "<< numOfCircles <<" circles." << endl;
    }
    Circle(const Circle &k)
    {
        center = k.center;
        numOfCircles++;
        cout << "A circle at ("<< center.getX() <<", "<< center.getY() <<") and radius "<< radius <<" is copied! Now, we have "<< numOfCircles <<" circles." << endl;
    }
    Point& getCenter()
    {
        return center;
    }
    bool  pointInCircle(Point &k)
    {
        int d = (center.getX() - k.getX()) * (center.getX() - k.getX()) + (center.getY() - k.getY()) * (center.getY() - k.getY());
        return d < radius ? true : false;
    }
    static int getNumOfCircles()
    {
        return numOfCircles;
    }
    ~Circle()
    {
        numOfCircles--;
        cout << "A circle at ("<< center.getX() <<", "<< center.getY() <<") and radius "<< radius <<" is erased! Now, we have "<< numOfCircles <<" circles." << endl;
    }
};
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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

