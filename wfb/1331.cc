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
    double x() const {return px;}
    double y() const {return py;}
    void x(double x_) {px = x_;}
    void y(double y_) {py = y_;}
    const Point& setPoint(const Point& p) {px=p.px; py=p.py; return *this;}
    void show() const {cout<<"Point : ("<<px<<", "<<py<<")"<<endl;}
};
class Line{
private:
    Point st,ed;
public:
    Line() {cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<") is created."<<endl;}
    Line(const Point& s,const Point& e) : st(s),ed(e) {cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<") is created."<<endl;}
    Line(double x1,double y1,double x2,double y2) : st(x1,y1),ed(x2,y2) {cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<") is created."<<endl;}
    Line(const Line& l) :st(l.st),ed(l.ed){cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<") is copied."<<endl;}
    ~Line() {cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<") is erased."<<endl;}
    void show() const {cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<")"<<endl;}
    const Line& setLine(double x1,double y1,double x2,double y2) {st.x(x1);st.y(y1);ed.x(x2);ed.y(y2); return *this;}
    const Line& setLine(const Point& p1,const Point& p2) {st.setPoint(p1); ed.setPoint(p2); return *this;}
    const Line& setLine(const Line& l) {st.setPoint(l.st);ed.setPoint(l.ed); return *this;}
    const Line& setLine(double x1) {st.x(x1); return *this;}
    void readLine() {char tmp;double x1,y1,x2,y2; cin>>x1>>tmp>>y1>>x2>>tmp>>y2; st.x(x1); st.y(y1); ed.x(x2); ed.y(y2);}
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
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1272 kb
****************************************************************/

