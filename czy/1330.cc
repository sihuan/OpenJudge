#include <iostream>
#include "iomanip"

using namespace std;

class  Point
{
    private:
        double x1,y1;
    public:
        friend class Line;
        Point(){x1=0,y1=0;cout<<"Point : ("<<x1<<", "<<y1<<") is created."<<endl;}
        Point(double xx,double yy){x1=xx;y1=yy;
        cout<<"Point : ("<<x1<<", "<<y1<<") is created."<<endl;
        }
        void show(){cout<<"Point : ("<<x1<<", "<<y1<<")"<<endl;}
         Point(Point &p1)
        {
            x1=p1.x1;y1=p1.y1;
            cout<<"Point : ("<<x1<<", "<<y1<<")"<<" is copied."<<endl;
        }
        ~Point(){ cout<<"Point : ("<<x1<<", "<<y1<<") is erased."<<endl;}
};

class  Line
{
    private:
        double x2,y2,x3,y3;
        Point pp1,pp2;
    public:
        Line():pp1(0,0),pp2(0,0){ cout<<"Line : ("<<pp1.x1<<", "<<pp1.y1<<") to ("<<pp2.x1<<", "<<pp2.y1<<")"<<" is created."<<endl;}
        void SetLine(double aa,double bb,double cc,double dd)
        {
            x2=aa;y2=bb;x3=cc;y3=dd;
            pp1.x1=aa;pp1.y1=bb;pp2.x1=cc;pp2.y1=dd;
        }
        Line(double aa,double bb,double cc,double dd):pp1(aa,bb),pp2(cc,dd)
        {
            x2=aa;y2=bb;x3=cc;y3=dd;
            cout<<"Line : ("<<x2<<", "<<y2<<") to ("<<x3<<", "<<y3<<")"<<" is created."<<endl;

        }
        Line(Point &p1,Point &p2):pp1(p1),pp2(p2)
        {
            //cout<<"Line : ("<<p1.x1<<", "<<p1.y1<<") to ("<<p2.x1<<", "<<p2.y1<<")"<<endl;
            cout<<"Line : ("<<p1.x1<<", "<<p1.y1<<") to ("<<p2.x1<<", "<<p2.y1<<")"<<" is created."<<endl;
        }
        void show()
        {
            cout<<"Line : ("<<pp1.x1<<", "<<pp1.y1<<") to ("<<pp2.x1<<", "<<pp2.y1<<")"<<endl;
        }
        ~Line()
        {
            cout<<"Line : ("<<pp1.x1<<", "<<pp1.y1<<") to ("<<pp2.x1<<", "<<pp2.y1<<")"<<" is erased."<<endl;
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
    Line line[num];
    for(i = 0; i < num; i++)
    {
        std::cout<<"=========================\n";
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        line[i].SetLine(x1, y1, x2, y2);
        line[i].show();
    }
    std::cout<<"=========================\n";
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}
/**************************************************************
	Problem: 1330
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1272 kb
****************************************************************/

