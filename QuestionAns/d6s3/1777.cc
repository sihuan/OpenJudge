#include <iostream>
using namespace std;

class Point {
private:
    int x_, y_;

public:
    Point(int x, int y)
        : x_(x)
        , y_(y)
    {
        cout << "A point (" << x_ << ", " << y_ << ") is created!" << endl;
    }
    Point(Point& p)
        : x_(p.x_)
        , y_(p.y_)
    {
        cout << "A point (" << x_ << ", " << y_ << ") is copied!" << endl;
    }
    ~Point()
    {
        cout << "A point (" << x_ << ", " << y_ << ") is erased!" << endl;
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
};

class Rectangle {
private:
    Point leftTop_, rightBottom_;

public:
    Rectangle(int x1, int y1, int x2, int y2)
        : leftTop_(x1, y1)
        , rightBottom_(x2, y2)
    {
        cout << "A rectangle ";
        leftTop_.show();
        cout << " to ";
        rightBottom_.show();
        cout << " is created!" << endl;
    }
    ~Rectangle()
    {
        cout << "A rectangle ";
        leftTop_.show();
        cout << " to ";
        rightBottom_.show();
        cout << " is erased!" << endl;
    }
    Point& getLeftTop()
    {
        return leftTop_;
    }
    Point getRightBottome()
    {
        return rightBottom_;
    }
    int getArea()
    {
        return (rightBottom_.getX() - leftTop_.getX()) * (leftTop_.getY() - rightBottom_.getY());
    }
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
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

