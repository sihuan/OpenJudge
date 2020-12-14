#include <iostream>
#include <iomanip>
    static int sum=0;
using namespace std;
class Point
{
   private:
    double x;
    double y;
   public:
       friend class Line;
    Point():x(0),y(0){cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;}
    Point(double xx,double yy):x(xx),y(yy)
    {
         cout<<"Point : ("<<x<<", "<<y<<") is created."<<endl;
    }
    void show(){cout<<"Point : ("<<x<<", "<<y<<")"<<endl;}
    Point(const Point &p1):x(p1.x),y(p1.y)
        {
            cout<<"Point : ("<<x<<", "<<y<<")"<<" is copied."<<endl;
        }
    ~Point(){ cout<<"Point : ("<<x<<", "<<y<<") is erased."<<endl;}
};

class  Line
{
    private:
        Point p1,p2;
    public:
        Line():p1(0,0),p2(0,0){cout<<"Line : ("<<p1.x<<", "<<p1.y<<") to ("<<p2.x<<", "<<p2.y<<")"<<" is created."<<endl;}
        Line(const Line &t):p1(t.p1),p2(t.p2)
        {
            cout << "Line : (" << p1.x << ", " << p1.y << ") to (" << p2.x <<", " << p2.y << ") is copied." << endl;
        }
        Line(Point &pp1,Point &pp2):p1(pp1),p2(pp2){cout<<"Line : ("<<p1.x<<", "<<p1.y<<") to ("<<p2.x<<", "<<p2.y<<")"<<" is created."<<endl;}
        ~Line (){cout<<"Line : ("<<p1.x<<", "<<p1.y<<") to ("<<p2.x<<", "<<p2.y<<")"<<" is erased."<<endl;}

         void show()
        {
            cout<<"Line : ("<<p1.x<<", "<<p1.y<<") to ("<<p2.x<<", "<<p2.y<<")"<<endl;
        }
        void readLine()
        {
            char x;
            cin>>p1.x>>x>>p1.y>>p2.x>>x>>p2.y;
        }
        Line &setLine(const Point &q, const Point &w)
        {
            p1.x=q.x;
            p1.y=q.y;
            p2.x=w.x;
            p2.y=w.y;
            return *this;
        }
        Line &setLine(const Line &qw)
        {
            p1.x=qw.p1.x;
            p1.y=qw.p1.y;
            p2.x=qw.p2.x;
            p2.y=qw.p2.y;
            return *this;
        }

};


int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    Line line[num];
    for(i = 0; i < num; i++)
    {
        line[i].readLine();
        line[i].show();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    l1.show();
    l2.setLine(l1).show();
    l3.show();
    l4.setLine(t,q).show();
}
/**************************************************************
	Problem: 1331
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1272 kb
****************************************************************/

