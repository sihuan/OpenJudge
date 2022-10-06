#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{
public:
    Point()
    {
        xx=0;
        yy=0;
        numOfPoints++;
        nump++;
//        cout << "Point : ("<<xx<<", "<<yy<<") is created."<<endl;
    }
    Point(double _x,double _y)
    {
        xx=_x;
        yy=_y;
        numOfPoints++;
        nump++;
//        cout << "Point : ("<<xx<<", "<<yy<<") is created."<<endl;
    }
    Point(const Point &another)
    {
        xx=another.xx;
        yy=another.yy;
        numOfPoints++;
        nump++;
//        cout << "Point : ("<<xx<<", "<<yy<<") is copied."<<endl;
    }
    void setPoint(double _x,double _y)
    {
        xx=_x;
        yy=_y;
    }
    void show()
    {
//        cout << "Point : ("<<xx<<", "<<yy<<")"<<endl;
    }
    ~Point()
    {
        numOfPoints--;
//        cout << "Point : ("<<xx<<", "<<yy<<") is erased."<<endl;
    }
    double x()const
    {
        return xx;
    }
    double y()const
    {
        return yy;
    }
    void showNoEndOfLine() const
    {
//        cout << "Point : ("<<xx<<", "<<yy<<")";
    }
    static void showCounter()
    {
        cout << "Current : "<<numOfPoints<<" points." << endl;
    }
    static void showSum()
    {
        cout << "In total : "<<nump<<" points."<<endl;
    }
    double xx,yy;
    static int numOfPoints;
    static int nump;
};
int Point::numOfPoints=0;
int Point::nump=0;
class Line
{
public:
    Line(double _x1=0,double _y1=0,double _x2=0, double _y2=0):pf(_x1,_y1),ps(_x2,_y2)
    {
        numl++;
        numOfLines++;
        x1=_x1;
        y1=_y1;
        x2=_x2;
        y2=_y2;
//        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
    }
    Line(const Point &p1,const Point &p2):pf(p1),ps(p2)
    {
        numl++;
        numOfLines++;
        x1=p1.xx;
        y1=p1.yy;
        x2=p2.xx;
        y2=p2.yy;
//        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is created."<<endl;
    }
    Line(const Line &another):pf(another.pf),ps(another.ps)
    {
        numl++;
        numOfLines++;
        x1=another.x1;
        x2=another.x2;
        y1=another.y1;
        y2=another.y2;
//        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is copied."<<endl;
    }
    ~Line()
    {
        numOfLines--;
//        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<") is erased."<<endl;
    }
    void show() const
    {
//        cout<<"Line : ("<<x1<<", "<<y1<<") to ("<<x2<<", "<<y2<<")"<<endl;
    }
    void SetLine(double _x1,double _y1,double _x2, double _y2)
    {
        x1=_x1;
        y1=_y1;
        x2=_x2;
        y2=_y2;
        pf.setPoint(x1,y1);
        ps.setPoint(x2,y2);
    }
    Line &setLine(Point &p1,Point &p2)
    {
        x1=p1.xx;
        x2=p2.xx;
        y1=p1.yy;
        y2=p2.yy;
        pf.setPoint(x1,y1);
        ps.setPoint(x2,y2);
        return *this;
    }
    Line &setLine(Line &another)
    {
        x1=another.x1;
        x2=another.x2;
        y1=another.y1;
        y2=another.y2;
        pf.setPoint(x1,y1);
        ps.setPoint(x2,y2);
        return another;
    }
    void readLine()
    {
        char ch1,ch2;
        cin >> x1 >> ch1 >> y1 >> x2 >> ch2 >> y2;
        pf.setPoint(x1,y1);
        ps.setPoint(x2,y2);

    }
    const Point &start() const
    {
        return pf;
    }
    const Point &end() const
    {
        return ps;
    }
    void setStart(Point &p)
    {
        x1=p.xx;
        y1=p.yy;
        pf.setPoint(x1,y1);
    }
    void setEnd(Point &p)
    {
        x2=p.xx;
        y2=p.yy;
        ps.setPoint(x2,y2);
    }
    static void showCounter()
    {
        cout << "Current : "<<numOfLines<<" lines." << endl;
    }
    static void showSum()
    {
        cout << "In total : "<<numl<<" lines."<<endl;
    }
private:
    double x1, x2, y1, y2;
    Point pf,ps;
    static int numOfLines;
    static int numl;
};
int Line::numOfLines=0;
int Line::numl=0;

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
	User: 202001060117
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1272 kb
****************************************************************/

