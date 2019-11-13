#include <iostream>
#include <iomanip>

using namespace std;

class Point{
private:
    double px,py;
    static int cnt;
    static int sum;
public:
    Point() {px=0; py=0; ++cnt; ++sum;}
    Point(double x,double y) {px=x; py=y; ++cnt; ++sum;}
    Point (const Point & p) {px=p.px; py=p.py; ++cnt; ++sum;}
    ~Point() {--cnt;}
    double x() const {return px;}
    double y() const {return py;}
    void x(double x_) {px = x_;}
    void y(double y_) {py = y_;}
    const Point& setPoint(const Point& p) {px=p.px; py=p.py; return *this;}
    void show() const {cout<<"Point : ("<<px<<", "<<py<<")"<<endl;}
    static void showCounter() {cout<<"Current : "<<cnt<<" points."<<endl;}
    static void showSum() {cout<<"In total : "<<sum<<" points."<<endl;}
};
class Line{
private:
    Point st,ed;
    static int cnt;
    static int sum;
public:
    Line() {++cnt; ++sum;}
    Line(const Point& s,const Point& e) : st(s),ed(e) {++cnt; ++sum;}
    Line(double x1,double y1,double x2,double y2) : st(x1,y1),ed(x2,y2) {++cnt; ++sum;}
    Line(const Line& l) :st(l.st),ed(l.ed){++cnt; ++sum;}
    ~Line() {--cnt;}
    void show() const {cout<<"Line : ("<<st.x()<<", "<<st.y()<<") to ("<<ed.x()<<", "<<ed.y()<<")"<<endl;}
    const Line& setLine(double x1,double y1,double x2,double y2) {st.x(x1);st.y(y1);ed.x(x2);ed.y(y2); return *this;}
    const Line& setLine(const Point& p1,const Point& p2) {st.setPoint(p1); ed.setPoint(p2); return *this;}
    const Line& setLine(const Line& l) {st.setPoint(l.st);ed.setPoint(l.ed); return *this;}
    const Line& setLine(double x1) {st.x(x1); return *this;}
    const Point& start() const {return st;}
    const Point& end() const {return ed;}
    void setStart(const Point& p) {st = p;}
    void setEnd(const Point& p) {ed=p;}
    void readLine() {char tmp;double x1,y1,x2,y2; cin>>x1>>tmp>>y1>>x2>>tmp>>y2; st.x(x1); st.y(y1); ed.x(x2); ed.y(y2);}
    static void showCounter() {cout<<"Current : "<<cnt<<" lines."<<endl;}
    static void showSum() {cout<<"In total : "<<sum<<" lines."<<endl;}
};
int Point::sum = 0;
int Point::cnt = 0;
int Line::cnt = 0;
int Line::sum = 0;


int main()
{
    int num, i;
    Point p(1, -2), q(2, -1), t;
    t.showCounter();
    t.showSum();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        Line *l1, l2;
        l1->showCounter();
        l1->showSum();
        l1 = new Line(p, q);
        line[i].readLine();
        p.showCounter();
        p.showSum();
        delete l1;
        l2.showCounter();
        l2.showSum();
        q.showCounter();
        q.showSum();
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    Line::showCounter();
    Line::showSum();
    Point::showCounter();
    Point::showSum();
    Line *l = new Line[num];
    l4.showCounter();
    l4.showSum();
    delete[] l;
    t.showCounter();
    t.showSum();
}

/**************************************************************
	Problem: 1333
	User: 201601011420
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1272 kb
****************************************************************/

