#include <iostream>
#include <iomanip>

using namespace std;

class Point{
private:
    double px,py;
public:
    Point() {px=0; py=0; cout<<"Point : ("<<px<<", "<<py<<") is created."<<endl;}
    Point(double x,double y) {px=x; py=y; cout<<"Point : ("<<px<<", "<<py<<") is created."<<endl;}
    Point (const Point & p) {px=p.px; py=p.py; cout<<"Point : ("<<px<<", "<<py<<") is copied."<<endl;}
    ~Point() {cout<<"Point : ("<<px<<", "<<py<<") is erased."<<endl;}
    double x() {return px;}
    double y() {return py;}
    void x(double x_) {px = x_;}
    void y(double y_) {py = y_;}
    void show() {cout<<"Point : ("<<px<<", "<<py<<")"<<endl;}
};
class Line{
private:
    Point st,ed;
public:
    Line() {cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<") is created."<<endl;}
    Line(const Point& s,const Point& e) : st(s),ed(e) {cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<") is created."<<endl;}
    Line(double x1,double y1,double x2,double y2) : st(x1,y1),ed(x2,y2) {cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<") is created."<<endl;}
    ~Line() {cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<") is erased."<<endl;}
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
        std::cout<<"=========================\n";
        std::cin>>x1>>c>>y1>>x2>>c>>y2;
        Line line(x1, y1, x2, y2);
        line.show();
    }
    std::cout<<"=========================\n";
    Line l1(p, q), l2(p, t), l3(q, t), l4(t, q);
    l1.show();
    l2.show();
    l3.show();
    l4.show();
}

/**************************************************************
	Problem: 1329
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:40 ms
	Memory:1272 kb
****************************************************************/

