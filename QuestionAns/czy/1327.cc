#include <iostream>
#include "iomanip"

using namespace std;

class  Point
{
    private:
        double x1,y1;
    public:
        friend class Line;
        Point(){x1=0,y1=0;}
        Point(double xx,double yy){x1=xx;y1=yy;}
        void show(){cout<<"Point : ("<<x1<<", "<<y1<<")"<<endl;}
};

class  Line
{
    private:
        double x2,y2,x3,y3;
    public:
        Line(double aa,double bb,double cc,double dd)
        {
            x2=aa;y2=bb;x3=cc;y3=dd;
        }
        Line(Point &p1,Point &p2)
        {
            //cout<<"Line : ("<<p1.x1<<", "<<p1.y1<<") to ("<<p2.x1<<", "<<p2.y1<<")"<<endl;
            x2=p1.x1;y2=p1.y1;x3=p2.x1;y3=p2.y1;
        }
        void show()
        {
            cout<<"Line : ("<<x2<<", "<<y2<<") to ("<<x3<<", "<<y3<<")"<<endl;
        }
};


int main()
{
    char c;
    int num, i;
    double x1, x2, y1, y2;
    Point p(1, -2), q(2, -1), t;
    t.show();
    std::cin>>num;
    for(i = 1; i <= num; i++)
    {
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        Line line(x1, y1, x2, y2);
        line.show();
    }
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}
/**************************************************************
	Problem: 1327
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1268 kb
****************************************************************/

