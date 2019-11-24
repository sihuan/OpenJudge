#include<iostream>
#include<string>
using namespace std;
class Point
{
private:
    int x;
    int y;
public:
    Point(int _x,int _y):x(_x),y(_y){cout<<"A point ("<<x<<", "<<y<<") is created!"<<endl;}
    Point(const Point &p)
    {
        x=p.x;
        y=p.y;
        cout<<"A point ("<<x<<", "<<y<<") is copied!"<<endl;
    }
    ~Point(){cout<<"A point ("<<x<<", "<<y<<") is erased!"<<endl;}
    int getX(){return x;}
    int getY(){return y;}
};
class Rectangle
{
private:
    Point a;
    Point b;
public:
    Rectangle(int x1,int y1,int x2,int y2):a(x1,y1),b(x2,y2){cout<<"A rectangle ("<<a.getX()<<", "<<a.getY()<<") to ("<<b.getX()<<", "<<b.getY()<<") is created!"<<endl;}
    ~Rectangle(){cout<<"A rectangle ("<<a.getX()<<", "<<a.getY()<<") to ("<<b.getX()<<", "<<b.getY()<<") is erased!"<<endl;}
    Point &getLeftTop(){return a;}
    Point getRightBottome(){return b;}
    int getArea()
    {
        int i,j;
        i=b.getX()-a.getX();
        j=a.getY()-b.getY();
        return i*j;
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
	User: 201801020908
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1272 kb
****************************************************************/

