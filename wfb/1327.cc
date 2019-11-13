#include <iostream>
#include <iomanip>

using namespace std;

class Point{
private:
    double px,py;
public:
    Point() {px=0; py=0;}
    Point(double x,double y) {px=x; py=y;}
    double x() {return px;}
    double y() {return py;}
    void show() {cout<<"Point : ("<<px<<", "<<py<<")"<<endl;}
};
class Line{
private:
    Point st,ed;
public:
    Line() {}
    Line(const Point& s,const Point& e) {st=s; ed=e;}
    Line(double x1,double y1,double x2,double y2) : st(x1,y1),ed(x2,y2) {}
    void show() {cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<")"<<endl;}
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:12 ms
	Memory:1268 kb
****************************************************************/

