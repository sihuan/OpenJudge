#include <iostream>

using namespace std;

class Point {
private:
    int x_,y_;
public:
    Point() {}
    Point(int x, int y) {x_=x; y_=y; cout<<"A point ("<<x_<<", "<<y_<<") is created!"<<endl;}
    Point(const Point& p) {x_=p.x_; y_=p.y_; cout<<"A point ("<<x_<<", "<<y_<<") is copied!"<<endl;}
    ~Point() {cout<<"A point ("<<x_<<", "<<y_<<") is erased!"<<endl;}
    int getX() const {return x_;}
    int getY() const {return y_;}
};
class Rectangle {
private:
    Point leftTop;
    Point rightBottom;
public:
    Rectangle(int x1,int y1,int x2,int y2) : leftTop(x1,y1),rightBottom(x2,y2) {cout<<"A rectangle ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created!"<<endl;}
    ~Rectangle() {cout<<"A rectangle ("<<leftTop.getX()<<", "<<leftTop.getY()<<") to ("<<rightBottom.getX()<<", "<<rightBottom.getY()<<") is erased!"<<endl;}
    const Point& getLeftTop() const {return leftTop;}
    Point getRightBottome() const {return rightBottom;}
    long long getArea() const {return (leftTop.getY()-rightBottom.getY())*(rightBottom.getX()-leftTop.getX());}
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

