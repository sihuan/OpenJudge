#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cstdio>
using namespace std;
class Point
{
public:
    Point(){}
    Point(int _x,int _y)
    {
        x=_x;
        y=_y;
        cout << "A point ("<<x<<", "<<y<<") is created!"<<endl;
    }
    Point(const Point &ano)
    {
        x=ano.x;
        y=ano.y;
        cout << "A point ("<<x<<", "<<y<<") is copied!"<<endl;
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
        cout << "A point ("<<x<<", "<<y<<") is erased!"<<endl;
    }
private:
    int x,y;
};
class Rectangle
{
public:
    Rectangle(int _x1,int _y1,int _x2,int _y2):p1(_x1,_y1),p2(_x2,_y2)
    {
        x1=_x1;
        x2=_x2;
        y1=_y1;
        y2=_y2;
        printf("A rectangle (%d, %d) to (%d, %d) is created!\n",x1,y1,x2,y2);
    }
    int getArea()
    {
        return abs(x1-x2)*abs(y1-y2);
    }
     Point &getLeftTop()
     {
         return p1;
     }
     Point getRightBottome()
     {
         return p2;
     }
     ~Rectangle()
     {
         printf("A rectangle (%d, %d) to (%d, %d) is erased!\n",x1,y1,x2,y2);
     }
private:
    int x1,x2,y1,y2;
    Point p1,p2;
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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:8 ms
	Memory:1268 kb
****************************************************************/

