#include <iostream>
#include <iomanip>

int psum=0;
int pnum=0;
int lsum=0;
int lnum=0;

using namespace std;
class Point
{
   private:
    double xx;
    double yy;
   public:
       friend class Line;
    Point():xx(0),yy(0){psum++;pnum++;}
    Point(double xxxx,double yyyy):xx(xxxx),yy(yyyy)
    {
        psum++;pnum++;

    }
    Point(const Point &p1):xx(p1.xx),yy(p1.yy)
        {
            psum++;pnum++;

        }
    double x()const{return xx;}
    double y()const{return yy;}
    ~Point(){ pnum--;}
    static  void showCounter()
        {
            cout<<"Current : "<<pnum<<" points."<<endl;
        }
        static void showSum()
        {
            cout<<"In total : "<<psum<<" points."<<endl;
        }
};

class  Line
{
    private:
        Point p1,p2;
    public:
        Line():p1(0,0),p2(0,0){lsum++;lnum++;}
        Line(const Line &t):p1(t.p1),p2(t.p2)
        {
            lsum++;lnum++;
        }
        Line(Point &pp1,Point &pp2):p1(pp1),p2(pp2){lsum++;lnum++;}
        ~Line (){lnum--;}

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
        static void showCounter()
        {
            cout<<"Current : "<<lnum<<" lines."<<endl;
        }
        static void showSum()
        {
            cout<<"In total : "<<lsum<<" lines."<<endl;
        }

};

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
	User: 201601160202
	Language: C++
	Result: Accepted
	Time:32 ms
	Memory:1272 kb
****************************************************************/

