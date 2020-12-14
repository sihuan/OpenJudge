#include <iostream>
using namespace std;
class  Point
{
private:
    double x_,y_;
public:
    Point(){x_ = 0; y_ = 0;cout << "Point : (" << x_ << ", " << y_ <<") is created." << endl;}
    Point(double xx,double yy){x_ = xx;y_  = yy;cout << "Point : (" << x_ << ", " << y_ <<") is created." << endl;}
    Point(const Point & p){x_ = p.x_;y_ = p.y_;cout << "Point : (" << x_ << ", " << y_ <<") is copied." << endl;}
    ~Point(){ cout << "Point : (" << x_ << ", " << y_ <<") is erased." << endl;}
     double getX() const {return x_;}
    double getY() const {return y_;}
    void show() const
    {
        cout << "Point : (" << x_  << ", "<< y_ << ")" <<endl;
    }
    double x()const{return x_;}
    double y()const{return y_;}
    void setXY(double xx,double yy){ x_=  xx;y_ = yy;}
    void showNoEndOfLine() const
    {
     cout << "Point : (" << x_  << ", "<< y_ << ")"  ;
    }
};
class Line
{
private:
    Point st,ed;
public:
   // Line():p1(),p2(){}
    Line():st(0,0),ed(0,0){cout << "Line : (" << st.getX() << ", " << st.getY()<< ") to (" <<ed.getX() <<", " << ed.getY() << ")" << " is created." << endl;}
    Line(const Point &sst, const Point &eed):st(sst),ed(eed)
     {
       cout << "Line : (" << st.getX() << ", " << st.getY()<< ") to (" <<ed.getX() <<", " << ed.getY() << ")" << " is created." << endl;
     }
    Line(const Line & line):st(line.st),ed(line.ed){ cout << "Line : (" << st.getX() << ", " << st.getY()<< ") to (" <<ed.getX() <<", " << ed.getY() << ")" << " is copied." << endl;  }
    void show() const
    {
     cout << "Line : (" << st.getX() << ", " << st.getY()<< ") to (" <<ed.getX() <<", " << ed.getY() << ")" <<endl;
    }
    Line &setLine(double x1,double y1,double x2,double y2)
    {
        st.setXY(x1,y1);
        ed.setXY(x2,y2);
        return *this;
    }
     Line & setLine(const Line &pt)
    {
      st = pt.st;//copy
      ed = pt.ed;
      return *this;
    }
     Line & setLine(const Point &sst,const Point &eed)
    {
      st = sst;//copy
      ed = eed;
      return *this;
    }
    void readLine()
    {
        double x1,y1,x2,y2;
        char ch ;
        cin >> x1 >>ch >>y1>> x2 >> ch >>y2;
        st.setXY(x1,y1);
        ed.setXY(x2,y2);
    }
   const Point  &start() const {return st;}
   const  Point  &end() const  {return ed;}
    void setStart(const Point & pt){ st = pt;}
    void setEnd(const Point & pt){ed = pt;}
    ~Line()
    {
        cout << "Line : (" << st.getX() << ", " << st.getY()<< ") to (" <<ed.getX() <<", " << ed.getY() << ")" << " is erased." << endl;
    }
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
	User: 201901060203
	Language: C++
	Result: Accepted
	Time:28 ms
	Memory:1272 kb
****************************************************************/

