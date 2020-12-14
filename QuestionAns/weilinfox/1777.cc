#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;

class Point {
        int x, y;
public:
        Point(int a, int b):x(a),y(b) {cout << "A point (" << x << ", " << y <<") is created!" << endl;}
        ~Point() {cout << "A point (" << x << ", " << y <<") is erased!" << endl;}
        Point (Point& p) {
                x = p.x; y = p.y;
                cout << "A point (" << x << ", " << y << ") is copied!" << endl;
        }
        int getX () {return x;}
        int getY () {return y;}
};

class Rectangle {
        Point *p1, *p2;
public:
        Rectangle (int a, int b, int c, int d) {
                p1 = new Point(a, b);
                p2 = new Point(c, d);
                cout << "A rectangle (" << a << ", " << b << ") to (" << c << ", " << d << ") is created!" << endl;
        }
        ~Rectangle () {
                cout << "A rectangle (" << (*p1).getX() << ", " << (*p1).getY() << ") to (" << (*p2).getX() << ", " << (*p2).getY() << ") is erased!" << endl;
                delete p2; delete p1;
        }
        int getArea () {return abs(((*p2).getX() - (*p1).getX()) * ((*p2).getY() - (*p1).getY()));}
        Point& getLeftTop() {return *p1;}
        Point getRightBottome() {return *p2;}


};


int main()
{
    int cases;
    int x1, y1, x2, y2;

    cin>>cases;
    for (int i = 0; i < cases; i++)
    {
        cin>>x1>>y1>>x2>>y2;
        Rectangle rect(x1,y1,x2,y2);
        cout<<"Area: "<<rect.getArea()<<endl;
        cout<<"Left top is ("<<rect.getLeftTop().getX()<<", "<<rect.getLeftTop().getY()<<")"<<endl;
        cout<<"Right bottom is ("<<rect.getRightBottome().getX()<<", "<<rect.getRightBottome().getY()<<")"<<endl;
    }
    return 0;
}
/**************************************************************
	Problem: 1777
	User: 201901060401
	Language: C++
	Result: Accepted
	Time:0 ms
	Memory:1272 kb
****************************************************************/

