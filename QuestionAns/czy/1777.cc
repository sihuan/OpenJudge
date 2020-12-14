#include <iostream>
#include <string.h>
#include<ctype.h>
using namespace std;

class Point
{
    friend class Rectangle;
private :
    int xx,yy;
public:
    Point(){}
    Point(int x,int y):xx(x),yy(y){cout<<"A point ("<<xx<<", "<<yy<<") is created!"<<endl;}
    Point(Point &p){xx=p.xx;yy=p.yy;
    cout<<"A point ("<<xx<<", "<<yy<<") is copied!"<<endl;}
    int getX() {return xx;}
    int getY() {return yy;}
    ~Point()
    {
        cout<<"A point ("<<xx<<", "<<yy<<") is erased!"<<endl;
    }
};
class Rectangle
{
    friend class Point;
private:
    Point l,r;
public:
    Rectangle(){}
    Rectangle(int a,int b,int c,int d):l(a,b),r(c,d)
    {cout<<"A rectangle ("<<a<<", "<<b<<") to ("<<c<<", "<<d<<") is created!"<<endl;}
    Point &getLeftTop()
    {
        //cout<<"Right bottom is ("<<r.xx<<", "<<r.yy<<")"<<endl;
        return l;}
    Point getRightBottome()
    {
        //cout<<"Left top is ("<<l.xx<<", "<<l.yy<<")"<<endl;
        return r;}
    int getArea()
    {
        int x,y;
        x=r.xx-l.xx;
        y=l.yy-r.yy;
        return x*y;
    }
    ~Rectangle()
    {
        cout<<"A rectangle ("<<l.xx<<", "<<l.yy<<") to ("<<r.xx<<", "<<r.yy<<") is erased!"<<endl;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

