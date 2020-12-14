#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Point {
public:
        int x, y;
        static int num;

        Point(int a, int b):x(a),y(b) {
                num++;
                cout << "The Point (" << x << ", " << y <<") is created! Now, we have " << num << " points." << endl;
        }
        ~Point() {cout << "A Point (" << x << ", "<< y <<") is erased! Now, we have " << --num << " points." << endl;}
        Point (const Point& p) {
                x = p.x;
                y = p.y;
                cout << "A Point (" << x << ", " << y << ") is copied! Now, we have " << ++num << " points." << endl;
        }
        static int getNumOfPoints() {return num;}
        int getX() {return x;}
        int getY() {return y;}
};
int Point::num = 0;

class Circle {
        Point center;
        int r;
        static int num;
public:
        Circle(int a, int b, int c):center(a, b),r(c) {
                cout << "A circle at (" << a << ", " << b << ") and radius " << r << " is created! Now, we have " << ++num << " circles." << endl;
        }
        ~Circle() {
                cout << "A circle at (" << (center).getX() << ", " << (center).getY() << ") and radius " << r << " is erased! Now, we have " << --num << " circles." << endl;
        }
        Circle(const Point p, int rn):center(p),r(rn) {
                cout << "A circle at (" << (center).x << ", " << (center).y << ") and radius " << r << " is created! Now, we have " << ++num << " circles." << endl;
        }
        static int getNumOfCircles() {return num;}
        Point& getCenter () {return center;}
        bool pointInCircle(Point & p) {
                double rn;
                rn = (double)((p.getX() - center.x) * (p.getX() - center.x) + (p.getY() - center.y) * (p.getY() - center.y));
                rn = sqrt(rn);
                return rn < (double)r;
        }

};

int Circle::num = 0;


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
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1280 kb
****************************************************************/

