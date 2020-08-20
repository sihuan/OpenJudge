#include <iostream>
using namespace std;
#include <iomanip>
class Point{
private:
    double x_,y_;
    friend class Line;
public:
    Point(double x,double y)
    {
        x_ = x;
        y_ = y;
        cout<<"Point : ("<<x_<<", "<<y_<<") is created."<<endl;
    }
    Point()
    {
        x_ = 0;
        y_ = 0;
        cout<<"Point : ("<<x_<<", "<<y_<<") is created."<<endl;
    }
    Point(double a):x_(a),y_(a) { cout<<"Point : ("<<x_<<", "<<y_<<") is created."<<endl;}
    void setvalue(double xx,double yy)
    {
        x_ = xx;
        y_ = yy;
    }
    //void setx(int xx) {x_ = xx;}
    //void sety(int yy) {y_ = yy;}
    void show()
    {
        cout<<"Point : ("<<x_<<", "<<y_<<")"<<endl;
    }
    double x() const { return x_;}
    double y() const { return y_;}
    Point(const Point &p)
    {
        x_ = p.x_;
        y_ = p.y_;
        cout<<"Point : ("<<x_<<", "<<y_<<") is copied."<<endl;
    }
    ~Point()
    {
        cout<<"Point : ("<<x_<<", "<<y_<<") is erased."<<endl;
    }
    void showNoEndOfLine()const{cout<<"Point : ("<<x_<<", "<<y_<<")";}
};
 
class Line{
private:
    Point x1_,y1_;
    double x1,y1,x2,y2;
    friend class Point;
public:
    Line(double xx1,double yy1,double xx2,double yy2):x1_(xx1,yy1),y1_(xx2,yy2)
    {
        cout<<"Line : ("<<x1_.x_<<", "<<x1_.y_<<") to ("<<y1_.x_<<", "<<y1_.y_<<") is created."<<endl;
    }
    Line(Point &q1,Point &q2):x1_(q1),y1_(q2)
    {
        cout<<"Line : ("<<x1_.x_<<", "<<x1_.y_<<") to ("<<y1_.x_<<", "<<y1_.y_<<") is created."<<endl;
    }
    Line(const Line&I):x1_(I.x1_),y1_(I.y1_) {cout<<"Line : ("<<x1_.x_<<", "<<x1_.y_<<") to ("<<y1_.x_<<", "<<y1_.y_<<") is copied."<<endl;}
    Line():x1_(),y1_(){cout<<"Line : ("<<x1_.x_<<", "<<x1_.y_<<") to ("<<y1_.x_<<", "<<y1_.y_<<") is created."<<endl;}
    Line &setLine(double xx3,double yy3,double xx4,double yy4)
    {
        x1_.x_ = xx3;
        x1_.y_ = yy3;
        y1_.x_ = xx4;
        y1_.y_ = yy4;
        return *this;
    }
    void show() const
    {
        cout<<"Line : ("<<x1_.x_<<", "<<x1_.y_<<") to ("<<y1_.x_<<", "<<y1_.y_<<")"<<endl;
    }
    ~Line()
    {
        cout<<"Line : ("<<x1_.x_<<", "<<x1_.y_<<") to ("<<y1_.x_<<", "<<y1_.y_<<") is erased."<<endl;
    }
    Line &setLine(const Point &p1,const Point &p2)
    {
        x1_ = p1;
        y1_ = p2;
        return *this;
    }
    Line &setLine(const Line& q)
    {
       *this = q;
       return *this;
    }
    void readLine()
    {
       double x1,y1,x2,y2;
       char c;
       cin>>x1>>c>>y1>>x2>>c>>y2;
       x1_.x_ = x1;
       x1_.y_ = y1;
       y1_.x_ = x2;
       y1_.y_ = y2;
    }
    const Point &start() const
    {
        return x1_;
    }
    const Point &end() const
    {
        return y1_;
    }
    void setStart(Point &c) {x1_ = c;}
    void setEnd(Point &e) {y1_ = e;}
};

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
    t.show();
    std::cin>>num;
    Line line[num + 1];
    for(i = 1; i <= num; i++)
    {
        line[i].readLine();
        showLine(line[i]);
    }
    Line l1(p, q), l2(p,t), l3(q,t), l4(l1);
    showLineCoordinate(l1);
    showLinePoint(l2);
    showLinePoint(l3.setLine(l1));
    showLineCoordinate(l4.setLine(t,q));
    line[0].setStart(t);
    line[0].setEnd(q);
}

/**************************************************************
	Problem: 1332
	User: 201901061011
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1272 kb
****************************************************************/

