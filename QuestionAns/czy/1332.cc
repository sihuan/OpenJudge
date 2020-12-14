#include <iostream>
#include <iomanip>

using namespace std;
class Point
{
   private:
    double xx;
    double yy;
   public:
       friend class Line;
    Point():xx(0),yy(0){cout<<"Point : ("<<xx<<", "<<yy<<") is created."<<endl;}
    Point(double xxxx,double yyyy):xx(xxxx),yy(yyyy)
    {
         cout<<"Point : ("<<xx<<", "<<yy<<") is created."<<endl;
    }
    void show(){cout<<"Point : ("<<xx<<", "<<yy<<")"<<endl;}
    Point(const Point &p1):xx(p1.xx),yy(p1.yy)
        {
            cout<<"Point : ("<<xx<<", "<<yy<<")"<<" is copied."<<endl;
        }
    double x()const{return xx;}
    double y()const{return yy;}
    ~Point(){ cout<<"Point : ("<<xx<<", "<<yy<<") is erased."<<endl;}
    void showNoEndOfLine()const {cout << "Point : (" << xx <<", "<< yy <<")";}
};

class  Line
{
    private:
        Point p1,p2;
    public:
        Line():p1(0,0),p2(0,0){cout<<"Line : ("<<p1.xx<<", "<<p1.yy<<") to ("<<p2.xx<<", "<<p2.yy<<")"<<" is created."<<endl;}
        Line(const Line &t):p1(t.p1),p2(t.p2)
        {
            cout << "Line : (" << p1.xx << ", " << p1.yy << ") to (" << p2.xx <<", " << p2.yy << ") is copied." << endl;
        }
        Line(Point &pp1,Point &pp2):p1(pp1),p2(pp2){cout<<"Line : ("<<p1.xx<<", "<<p1.yy<<") to ("<<p2.xx<<", "<<p2.yy<<")"<<" is created."<<endl;}
        ~Line (){cout<<"Line : ("<<p1.xx<<", "<<p1.yy<<") to ("<<p2.xx<<", "<<p2.yy<<")"<<" is erased."<<endl;}

         void show()
        const{
            cout<<"Line : ("<<p1.xx<<", "<<p1.yy<<") to ("<<p2.xx<<", "<<p2.yy<<")"<<endl;
        }
        void readLine()
        {
            char xx;
            cin>>p1.xx>>xx>>p1.yy>>p2.xx>>xx>>p2.yy;
        }
        Line &setLine(const Point &q, const Point &w)
        {
            p1.xx=q.xx;
            p1.yy=q.yy;
            p2.xx=w.xx;
            p2.yy=w.yy;
            return *this;
        }
        Line &setLine(const Line &qw)
        {
            p1.xx=qw.p1.xx;
            p1.yy=qw.p1.yy;
            p2.xx=qw.p2.xx;
            p2.yy=qw.p2.yy;
            return *this;
        }
        const Point &start()
        const{
            return p1;
        }
        const Point &end()
        const{
            return p2;
        }
        void setStart(const Point &p)
        {
            p1.xx=p.xx;
            p1.yy=p.yy;
        }
        void setEnd(const Point &p)
        {
            p2.xx=p.xx;
            p2.yy=p.yy;
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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1272 kb
****************************************************************/

