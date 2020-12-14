#include <iostream>
using namespace std;

class Point {
    friend class Line;
private:
    double x1,y1;
    static int P_Counter, P_Sum;
public:
    void setPoint(double a,double b){x1=a;y1=b;}
    Point():x1(0),y1(0) {P_Counter++;P_Sum++;
    //cout << "Point : (" << x1 << ", " << y1 << ") is created.\n";
    }
    Point(double xx, double yy) : x1(xx), y1(yy) {P_Counter++;P_Sum++;
    //cout << "Point : (" << x1 << ", " << y1 << ") is created.\n";
    }
    void show() const {cout << "Point : (" << x1 << ", " << y1 << ")\n";}
    Point(const Point &p) :x1(p.x1), y1(p.y1) {P_Counter++;P_Sum++;
    //cout << "Point : (" << x1 << ", " << y1 << ") is copied.\n";
    }
    ~Point(){P_Counter--;
    //cout << "Point : (" << x1 << ", " << y1 << ") is erased.\n";
    }
    double x() const {return x1;}
    double y() const {return y1;}
    void showNoEndOfLine() const{cout << "Point : (" << x1  << ", "<< y1 << ")";}

    static void showCounter();

    static void showSum();
};
class Line {
    friend class Point;
private:
    Point p, q;
    static int L_Counter, L_Sum;
public:
    Line():p(0, 0), q(0, 0){L_Counter++;L_Sum++;
        //cout << "Line : (" << p.x1 << ", " << p.y1 << ") to (" << q.x1 << ", " << q.y1 << ") is created.\n";
    }
    Line(const Point &p1,const Point &q1):p(p1), q(q1) {L_Counter++;L_Sum++;
       // cout << "Line : (" << p.x1 << ", " << p.y1 << ") to (" << q.x1 << ", " << q.y1 << ") is created.\n";
    }
    ~Line(){L_Counter--;
       // cout << "Line : (" << p.x1 << ", " << p.y1 << ") to (" << q.x1 << ", " << q.y1 << ") is erased.\n";
    }
    Line(double x1, double y1, double x2, double y2): p(x1, y1), q(x2, y2){
       // cout << "Line : (" << p.x1 << ", " << p.y1 << ") to (" << q.x1 << ", " << q.y1 << ") is created.\n";
    }
    void show() const {cout << "Line : (" << p.x1 << ", " << p.y1 << ") to (" << q.x1 << ", " << q.y1 << ")\n";}
    Line& setLine(double x1, double y1, double x2, double y2);
    void readLine();
    Line& setLine(const Point &, const Point &);
    Line& setLine(const Line&);
    Line(const Line& L): p (L.p) , q ( L.q) {L_Counter++;L_Sum++;
        //cout << "Line : (" << p.x1 << ", " << p.y1 << ") to (" << q.x1 << ", " << q.y1 << ") is copied.\n";
    }
    const Point& start() const {return p;}
    const Point& end() const {return q;}
    void setStart(const Point&);
    void setEnd(const Point &);

    static void showCounter();

    static void showSum();
};
int Point:: P_Counter = 0;
int Line:: L_Counter = 0;
int Line:: L_Sum = 0;
int Point:: P_Sum = 0;

void Point::showCounter() {
    cout << "Current : " << P_Counter << " points.\n";
}

void Point::showSum() {
    cout << "In total : " << P_Sum << " points.\n";
}

void Line::readLine() {
    char c;
    double x1, y1, x2, y2;
    cin >> x1 >> c >> y1 >> x2 >> c >> y2;
    p.setPoint(x1, y1);
    q.setPoint(x2, y2);
}
Line& Line::setLine(const Point &p1, const Point &q1) {
    p = p1;
    q = q1;
    return *this;
}
Line& Line::setLine(double x1, double y1, double x2, double y2) {
        p.x1 = x1;
        p.y1 = y1;
        q.x1 = x2;
        q.y1 = y2;
        return *this;
}
Line& Line::setLine(const Line &L) {
    p = L.p;
    q = L.q;
    return *this;
}

void Line::setStart(const Point& s) {
    p = s;
}

void Line::setEnd(const Point &s) {
    q = s;
}

void Line::showCounter() {
    cout << "Current : " << L_Counter << " lines.\n";
}

void Line::showSum() {
    cout << "In total : " << L_Sum << " lines.\n";
}

void showLineCoordinate(const Line& line)
{
    std::cout<<"Line : ";
    std::cout<<"("<<line.start().x()<<", "<<line.start().y()<<")";
    std::cout<<" to ";
    std::cout<<"("<<line.end().x()<<", "<<line.end().y()<<")";
    std::cout<<std::endl;
}

void showLinePoint(const Line& line)
{
    std::cout<<"Line : ";
    line.start().showNoEndOfLine();
    std::cout<<" to ";
    line.end().showNoEndOfLine();
    std::cout<<std::endl;
}

void showLine(const Line& line)
{
    line.show();
}




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
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:4 ms
	Memory:1272 kb
****************************************************************/

